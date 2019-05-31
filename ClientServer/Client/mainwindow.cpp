#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(readyRead()),this,SLOT(sockReady()));
    connect(socket, SIGNAL(disconnected()),this,SLOT(sockDisc()));
    ui->groupBox->hide();
    ui->groupBoxAdd->hide();
    ui->groupBoxEd->hide();
    ui->groupBoxButton->hide();
    ui->tableView->hide();
    ui->pushButtonBD->hide();
    ui->groupBoxCom->hide();
    ui->up->hide();
    ui->down->hide();
    ui->Worker_3->setChecked(false);
    ui->Admin_3->setChecked(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sockDisc()
{
    socket->deleteLater();
}

void MainWindow::sockReady()
{

}

void MainWindow::on_LoginB_clicked()
{
    socket->connectToHost("31.10.65.179",6666);
    QString Login = ui->Login->text();
    string login = Login.toStdString();
    QString Password = ui->Password->text();
    string password = Password.toStdString();

    QString text = Login + ":" + Password;

    if(!login.empty() and !password.empty())
    {
        socket->write(text.toUtf8().data());


        socket->waitForReadyRead(500);
        QString text = socket->readAll();

        int k = 0;
        string token;
        istringstream streamS(text.toStdString());
        while(getline(streamS, token, ':'))
        {
            if(k == 0) id = QString::fromUtf8(token.c_str());
            if(k == 1) status = QString::fromUtf8(token.c_str());
            k++;
        }

//        ui->text->append(access);

        if(status == "admin")
        {
            ui->groupBoxLog->hide();
            ui->groupBox->show();
            ui->tableView->show();
            ui->pushButtonBD->show();
            ui->groupBoxButton->show();
            ui->up->show();
            ui->down->show();
        }
        else if(status == "worker")
        {
            ui->groupBoxLog->hide();
            ui->tableView->show();
            ui->pushButtonBD->show();
            ui->groupBoxEd->show();
            ui->up->show();
            ui->down->show();
            ui->id_2->setText(id);
            ui->id_2->setDisabled(1);
            ui->Admin_3->hide();
            ui->Worker_3->hide();
        }

    }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->groupBoxAdd->show();
    ui->groupBoxCom->hide();

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->groupBoxAdd->hide();
    ui->groupBoxCom->hide();
    ui->groupBoxButton->hide();
    ui->groupBoxEd->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->groupBoxAdd->hide();
    ui->groupBoxCom->show();
}

void MainWindow::on_pushButtonCom_clicked()
{
    QString answer;
    QString text = ui->lineEdit->text();
    if(!text.toStdString().empty())
    {
        socket->write(text.toUtf8().data());
        socket->waitForReadyRead(500);
        answer = socket->readAll();
        if(answer == "true")
        {
            // ОКНО ЧТО ВСЕ ОК
        }
        else{
            // ОКНО ЧТО ВЫПОЛНИТЬ КОМАНДУ НЕ УДАЛОСЬ
        }
    }
}

void MainWindow::on_Add_clicked()
{
    QString Name = ui->Name->text();
    QString Year = ui->Year->text();
    QString Address = ui->Address->text();
    QString Tel = ui->Tel->text();
    QString access;
    if(ui->Worker->isChecked())
       {
           access = "worker";
       }
       else
       {
           access = "admin";
       }
    /* Можно сделать чтоб отправлял только команду и исключения у клиента
       или же отправлять список и парсить на сервере */
    QString text = Name + ":" + Year + ":" + Address + ":" + Tel + ":" + access;
    socket->write(text.toUtf8().data()); // Отправляем на сервер для парсинга


    ui->Name->clear();
    ui->Year->clear();
    ui->Address->clear();
    ui->Tel->clear();
}

void MainWindow::on_pushButtonBD_clicked()
{
    QString text = "on_pushButtonBD_clicked()";
    socket->write(text.toUtf8().data());
    socket->waitForReadyRead(1000);
    QString answer = socket->readAll();

    qDebug() << answer;

    QByteArray answerBd;
    answerBd = answer.toUtf8().data();
    QFile file("./2.txt");
    file.open(QIODevice::WriteOnly|QFile::Text);
    file.write(answerBd);
    file.close();
    //encrypt(); // Шифровать для отправки
    decrypt(); // Расшифровывать

    file.setFileName("./1.txt");
    if (file.open(QIODevice::ReadOnly|QFile::Text))
    {
        answer = file.readAll();
        ui->textEdit->append(answer);

    }
    file.close();




    QStandardItemModel *model = new QStandardItemModel;
    QStandardItem *item;

    QStringList horizontalHeader;
    horizontalHeader.append("id");
    horizontalHeader.append("name");
    horizontalHeader.append("year");
    horizontalHeader.append("address");
    horizontalHeader.append("tel");
    horizontalHeader.append("login");
    horizontalHeader.append("password");
    horizontalHeader.append("access");

    QStringList verticalHeader;

    model->setHorizontalHeaderLabels(horizontalHeader);
    model->setVerticalHeaderLabels(verticalHeader);

    int k = 0, j = 0;
    string token;
    QString Name, Year, Address, Tel, Login, Password, access, id;


    istringstream streamS(answer.toStdString());
    while(getline(streamS, token, '$'))
    {
       text = QString::fromUtf8(token.c_str());

       k = 0;
       istringstream streamS2(text.toStdString());
       while(getline(streamS2, token, ':'))
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
       item = new QStandardItem(QString(id));
       model->setItem(j, 0, item);

       item = new QStandardItem(QString(Name));
       model->setItem(j, 1, item);

       item = new QStandardItem(QString(Year));
       model->setItem(j, 2, item);

       item = new QStandardItem(QString(Address));
       model->setItem(j, 3, item);

       item = new QStandardItem(QString(Tel));
       model->setItem(j, 4, item);

       item = new QStandardItem(QString(Login));
       model->setItem(j, 5, item);

       item = new QStandardItem(QString(Password));
       model->setItem(j, 6, item);

       item = new QStandardItem(QString(access));
       model->setItem(j, 7, item);
       j++;
    }

    QFont font = ui->tableView->font();
    font.setPixelSize(size);
    ui->tableView->setFont(font);
    ui->tableView->horizontalHeader()->setFont( font );
    ui->tableView->verticalHeader()->setFont( font );
    ui->tableView->setModel(model);
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();


    // ПЕРЕДАТЬ МОДЕЛЬ С СЕРВЕРА
//    QSqlQuery query;
//    QSqlQueryModel *M = new QSqlQueryModel();
//    M->setQuery(query);
//    ui->tableView->setModel(M);
}

void MainWindow::on_Delete_clicked()
{
    //ТОЛЬКО ОТПРАВЛЯТЬ ЗАПРОС
    QString text = "DELETE FROM `users` WHERE `users`.`id` = " + ui->id->text();
    socket->write(text.toUtf8().data());
    ui->id->clear();
}

void MainWindow::on_Edit_clicked()
{

    QString Id = ui->id_2->text();
    QString Name = ui->Name_3->text();
    QString Year = ui->Year_3->text();
    QString Address = ui->Address_3->text();
    QString Tel = ui->Tel_3->text();
    QString Login = ui->login->text();
    QString Password = ui->password->text();
    QString access;
    if(ui->Worker_3->isChecked()) access = "worker";
    else if(ui->Admin_3->isChecked()) access = "admin";
    else access = "";

    QString text = Id + ":" + Name + ":" + Year + ":" + Address + ":" + Tel + ":" + Login + ":" + Password + ":" + access;
    socket->write(text.toUtf8().data());

    ui->Name_3->clear();
    ui->Year_3->clear();
    ui->Address_3->clear();
    ui->Tel_3->clear();
    ui->login->clear();
    ui->password->clear();


    ui->Worker_3->setCheckable(false);
    ui->Admin_3->setCheckable(false);

    ui->Worker_3->setCheckable(true);
    ui->Admin_3->setCheckable(true);


    if(status == "worker")
    {

    }
    else if (status == "admin")
    {
        ui->id_2->clear();
        ui->groupBoxButton->show();
        ui->groupBoxEd->hide();
    }
}

void MainWindow::on_up_clicked()
{
    size++;
    QFont font = ui->tableView->font();
    font.setPixelSize(size);
    ui->tableView->setFont(font);
    ui->tableView->horizontalHeader()->setFont( font );
    ui->tableView->verticalHeader()->setFont( font );
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_down_clicked()
{
    size--;
    QFont font = ui->tableView->font();
    font.setPixelSize(size);
    ui->tableView->setFont(font);
    ui->tableView->horizontalHeader()->setFont( font );
    ui->tableView->verticalHeader()->setFont( font );
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
}
