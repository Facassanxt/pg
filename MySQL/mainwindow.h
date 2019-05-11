#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "string"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>
#include "QDebug"
#include "QErrorMessage"
#include <QtSql/QSqlError>
#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include <QtSql>

#include <QCoreApplication>
#include <QVariant>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include "dialog.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void connect(QSqlDatabase db){
        db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("31.10.65.179");
        db.setDatabaseName("test");
        db.setPort(3306);
        db.setUserName("root");
        db.setPassword("vmvcIPvB0K9TeMvp");
        db.setConnectOptions("MYSQL_OPT_RECONNECT=TRUE;");

        if(!db.open())
        {
            qDebug() << "Error = " << db.lastError().text();
        }
        else
        {
            qDebug() << "Open db!";
        }
    }



private slots:
    void on_Login_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
};

#endif // MAINWINDOW_H
