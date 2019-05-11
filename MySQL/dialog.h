#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "string"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <vector>

#include <stdio.h>
#include <stdlib.h>
#include "QDir"
#include "QDebug"
using namespace std;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    string random_string( size_t length )
    {
        auto randchar = []() -> char
        {
            const char charset[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
            const size_t max_index = (sizeof(charset) - 1);
            return charset[ rand() % max_index ];
        };
        string str(length,0);
        generate_n( str.begin(), length, randchar );
        return str;
    }
    string random_char( size_t length )
    {
        auto randchar = []() -> char
        {
        const char charset[] =
        "0123456789";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[ rand() % max_index ];
        };
    string str(length,0);
    generate_n( str.begin(), length, randchar );
    return str;
    }

private slots:
    void on_Add_clicked();

    void on_Edit_clicked();

    void on_pushButton_clicked();

    void on_Delete_clicked();

    private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
