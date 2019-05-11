#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialog = new Dialog();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Login_clicked()
{
    QSqlDatabase db;
    connect(db);
    QSqlQuery query = QSqlQuery(db);
    if (!query.exec("SELECT * FROM users"))
    {
        qDebug() << query.lastError().databaseText();
        qDebug() << query.lastError().driverText();
        return;
    }
    QString Login = ui->Login_2->text();
    string login = Login.toStdString();
    QString Password = ui->Password->text();
    string password = Password.toStdString();
    QString access;

    if(!login.empty() and !password.empty())
    {

     long long int id;
     while(query.next())
     {
         if (Login == query.value(5).toString() and Password == query.value(6).toString())
         {
            id = stoi(query.value(0).toString().toStdString());
            access = query.value(7).toString();
            break;
         }
     }

        if (access == "admin"){
        dialog->show();
        this->close();
        }
        else if(access == "worker"){
        dialog->show();
        this->close();
        }
     }
}
