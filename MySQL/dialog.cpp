#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include "QMessageBox"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Add_clicked()
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
    QString Login = QString::fromStdString(random_string(5));
    QString Password = QString::fromStdString(random_char(5));

    QSqlQuery query;
    if(query.exec("INSERT INTO users (id, name, year, address, tel, login, password, access) VALUES (NULL, '"+Name+"', '"+Year+"', '"+Address+"', '"+Tel+"', '"+Login+"', '"+Password+"', '"+access+"')"))
    {
                  QMessageBox::information(this, "=)", "Success");
              }else {
                  QMessageBox::information(this, "=(", "No success");
              }
    ui->Name->clear();
    ui->Year->clear();
    ui->Address->clear();
    ui->Tel->clear();


}

void Dialog::on_Edit_clicked()
{
    QString id = ui->id_2->text();
    QString Name = ui->Name_2->text();
    QString Year = ui->Year_2->text();
    QString Address = ui->Address_2->text();
    QString Tel = ui->Tel_2->text();
    QString Login = ui->login->text();
    QString Password = ui->password->text();
    QString access;
    if (ui->Worker_2->isChecked() or ui->Admin_2->isChecked())
    {
        if(ui->Worker_2->isChecked())
        {
            access = "worker";
        }
        if(ui->Admin_2->isChecked())
        {
            access = "admin";
        }
    }
    else {
        access = "";
    }

    QSqlQuery query;
    if(Name == "") query.exec("UPDATE `users` SET `name` = `name` WHERE `users`.`id` = "+id);
    else query.exec("UPDATE `users` SET `name` = '"+Name+"' WHERE `users`.`id` = "+id);
    if(Year == "") query.exec("UPDATE `users` SET `name` = `name` WHERE `users`.`id` = "+id);
    else query.exec("UPDATE `users` SET `year` = '"+Year+"' WHERE `users`.`id` = "+id);
    if(Address == "") query.exec("UPDATE `users` SET `name` = `name` WHERE `users`.`id` = "+id);
    else query.exec("UPDATE `users` SET `address` = '"+Address+"' WHERE `users`.`id` = "+id);
    if(Tel == "") query.exec("UPDATE `users` SET `name` = `name` WHERE `users`.`id` = "+id);
    else query.exec("UPDATE `users` SET `tel` = '"+Tel+"' WHERE `users`.`id` = "+id);
    if(Login == "") query.exec("UPDATE `users` SET `name` = `name` WHERE `users`.`id` = "+id);
    else query.exec("UPDATE `users` SET `login` = '"+Login+"' WHERE `users`.`id` = "+id);
    if(Password == "") query.exec("UPDATE `users` SET `name` = `name` WHERE `users`.`id` = "+id);
    else query.exec("UPDATE `users` SET `password` = '"+Password+"' WHERE `users`.`id` = "+id);
    if(access == "") query.exec("UPDATE `users` SET `name` = `name` WHERE `users`.`id` = "+id);
    else query.exec("UPDATE `users` SET `access` = '"+access+"' WHERE `users`.`id` = "+id);

    ui->id_2->clear();
    ui->Name_2->clear();
    ui->Year_2->clear();
    ui->Address_2->clear();
    ui->Tel_2->clear();
    ui->login->clear();
    ui->password->clear();
    ui->Worker_2->setChecked(0);
    ui->Admin_2->setChecked(0);

}

void Dialog::on_pushButton_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM users");

        if(query.exec())
        {
            QSqlQueryModel *M = new QSqlQueryModel();
            M->setQuery(query);
            ui->tableView->setModel(M);
        }
        else
        {
           QMessageBox::critical(this, "Error", query.lastError().text());
        }
}

void Dialog::on_Delete_clicked()
{
    QString id = ui->id->text();
    QSqlQuery query;
    if(query.exec("DELETE FROM `users` WHERE `users`.`id` = "+id))
    {
                  QMessageBox::information(this, "=)", "Success");
              }else {
                  QMessageBox::information(this, "=(", "No success");
              }
    ui->id->clear();
}
