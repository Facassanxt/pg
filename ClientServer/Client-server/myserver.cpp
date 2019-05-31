#include "myserver.h"

myserver::myserver(QObject *parent) :
    QObject(parent)
{
    setlocale(LC_ALL, "Rus");
    mTcpServer = new QTcpServer(this);
    qDebug() << "server listen = " << mTcpServer->listen(QHostAddress::Any, 6666);
    QSqlDatabase db;
    con(db);
    QSqlQuery query = QSqlQuery(db);
    connect(mTcpServer, SIGNAL(newConnection()), this, SLOT(incomingConnection())); // подключаем сигнал "новое подключение" к нашему обработчику подключений
}



void myserver::incomingConnection()
{

   QTcpSocket * socket = mTcpServer->nextPendingConnection(); // получаем сокет нового входящего подключения
   int id = (int)socket->socketDescriptor();
   SClients[id] = socket;
   connect(socket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(stateChanged(QAbstractSocket::SocketState))); // делаем обработчик изменения статуса сокета
   connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));

    qDebug()<< socket <<" Client connected";
    ClientSoc << socket;
}

void myserver::readyRead()
{
    QObject * object = QObject::sender(); // далее и ниже до цикла идет преобразования "отправителя сигнала" в сокет, дабы извлечь данные
    if (!object)
        return;

    QTcpSocket * socket = static_cast<QTcpSocket *>(object);

    QString Message;


    Message = socket->readAll();
    qDebug()<<"Data: "<<Message;

    QSqlQuery query;
    QString Name, Year, Address, Tel, Login, Password, access, id;

    int k = 0;
    string token;
    istringstream streamS(Message.toStdString());
    while(getline(streamS, token, ':')) k++;
    qDebug() << k;

    QTcpSocket *temp = (QTcpSocket*)sender();
    int Id = (int)temp->socketDescriptor();

    if(Message == "on_pushButtonBD_clicked()")
    {
        QByteArray answerBd = "";
        answerBd = sendDB().toUtf8().data();
        QFile file("./1.txt");
        file.open(QIODevice::WriteOnly|QFile::Text);
        file.write(answerBd);
        file.close();
        encrypt(); // Шифровать для отправки
        //decrypt(); // Расшифровывать

        file.setFileName("./2.txt");
        if (file.open(QIODevice::ReadOnly|QFile::Text))
        {
            QByteArray fromFile = file.readAll();
            qDebug() << fromFile;

            socket->write(fromFile);
        }
        file.close();



       // socket->write(cryptsting(answerBd,1));

    }else if(k == 1)
    {
        if ((SWorAuth[Id] == SClients[Id]) || (SAdminAuth[Id] == SClients[Id])) qDebug() << query.exec(Message);
    }
    if(k == 2)
    {
        k = 0;
        istringstream streamS(Message.toStdString());
        while(getline(streamS, token, ':'))
        {
            if(k == 0) Login = QString::fromUtf8(token.c_str());
            if(k == 1) Password = QString::fromUtf8(token.c_str());
            k++;
        }

        query.exec("SELECT * FROM users");
        while(query.next())
        {
            if (Login == query.value(5).toString() and Password == query.value(6).toString())
            {
                id = query.value(0).toString();
                access = query.value(7).toString();
                break;
            }
        }
        QString text = id + ":" + access;
        if (access == "admin")
        {
            SAdminAuth[Id] = SClients[Id];
            AdminSoc << socket;
        }
        else if(access == "worker")
        {
            SWorAuth[Id] = SClients[Id];
            WorSoc << socket;
        }
        qDebug() << text;
        socket->write(text.toUtf8().data());
    }

    if((SWorAuth[Id] == SClients[Id]) or (SAdminAuth[Id] == SClients[Id]))
    {
        if(k == 5)
        {
            k = 0;
            istringstream streamS(Message.toStdString());
            while(getline(streamS, token, ':'))
            {
                if(k == 0) Name = QString::fromUtf8(token.c_str());
                if(k == 1) Year = QString::fromUtf8(token.c_str());
                if(k == 2) Address = QString::fromUtf8(token.c_str());
                if(k == 3) Tel = QString::fromUtf8(token.c_str());
                if(k == 4) access = QString::fromUtf8(token.c_str());
                Login = QString::fromUtf8(random_string(5).c_str());
                Password = QString::fromUtf8(random_char(5).c_str());
                k++;
            }
            QString Mes = "INSERT INTO users (id, name, year, address, tel, login, password, access) VALUES (NULL, '"+Name+"', '"+Year+"', '"+Address+"', '"+Tel+"', '"+Login+"', '"+Password+"', '"+access+"')";
            qDebug() << query.exec(Mes);
        }
        if(k == 7 or k == 8)
        {
            k = 0;
            istringstream streamS(Message.toStdString());
            while(getline(streamS, token, ':'))
            {
                if(k == 0) id = QString::fromUtf8(token.c_str());
                if(k == 1) Name = QString::fromUtf8(token.c_str());
                if(k == 2) Year = QString::fromUtf8(token.c_str());
                if(k == 3) Address = QString::fromUtf8(token.c_str());
                if(k == 4) Tel = QString::fromUtf8(token.c_str());
                if(k == 5) Login = QString::fromUtf8(token.c_str());
                if(k == 6) Password = QString::fromUtf8(token.c_str());
                if(k == 7) access = QString::fromUtf8(token.c_str());
                k++;
            }
            if(id != "")
            {
                if(Name != "") qDebug() << query.exec("UPDATE `users` SET `name` = '"+Name+"' WHERE `users`.`id` = "+id);
                if(Year != "") qDebug() << query.exec("UPDATE `users` SET `year` = '"+Year+"' WHERE `users`.`id` = "+id);
                if(Address != "") qDebug() << query.exec("UPDATE `users` SET `address` = '"+Address+"' WHERE `users`.`id` = "+id);
                if(Tel != "") qDebug() << query.exec("UPDATE `users` SET `tel` = '"+Tel+"' WHERE `users`.`id` = "+id);
                if(Login != "") qDebug() << query.exec("UPDATE `users` SET `login` = '"+Login+"' WHERE `users`.`id` = "+id);
                if(Password != "") qDebug() << query.exec("UPDATE `users` SET `password` = '"+Password+"' WHERE `users`.`id` = "+id);
                if(access != "") qDebug() << query.exec("UPDATE `users` SET `access` = '"+access+"' WHERE `users`.`id` = "+id);
            }
        }
    }



    //    QFile file;
    //    file.setFileName("D:/Desktop/Client-server/news.txt");
    //    if (file.open(QIODevice::ReadOnly|QFile::Text))
    //    {
    //        QByteArray fromFile = file.readAll();

    //        socket->write(fromFile);
    //        socket->waitForBytesWritten(500);
    //    }
    //    file.close();

}

void myserver::stateChanged(QAbstractSocket::SocketState state) // обработчик статуса, нужен для контроля за "вещающим"
{
    QObject * object = QObject::sender();
    if (!object)
        return;
    QTcpSocket * socket = static_cast<QTcpSocket *>(object);
    qDebug() << socket << " Покинул нас";
}
