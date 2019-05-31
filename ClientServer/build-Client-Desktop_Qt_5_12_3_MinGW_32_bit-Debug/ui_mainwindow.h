/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBoxLog;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *Label;
    QLabel *Label_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *Login;
    QLineEdit *Password;
    QPushButton *LoginB;
    QTableView *tableView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *id;
    QPushButton *Delete;
    QGroupBox *groupBoxAdd;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Year;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *Address;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *Tel;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *Admin;
    QRadioButton *Worker;
    QPushButton *Add;
    QGroupBox *groupBoxEd;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QLineEdit *id_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QLineEdit *Name_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QLineEdit *Year_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_13;
    QLineEdit *Address_3;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_14;
    QLineEdit *Tel_3;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_15;
    QLineEdit *login;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_16;
    QLineEdit *password;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *Admin_3;
    QRadioButton *Worker_3;
    QPushButton *Edit;
    QPushButton *pushButtonBD;
    QGroupBox *groupBoxButton;
    QVBoxLayout *verticalLayout_12;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QGroupBox *groupBoxCom;
    QVBoxLayout *verticalLayout_13;
    QLineEdit *lineEdit;
    QPushButton *pushButtonCom;
    QPushButton *up;
    QPushButton *down;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBoxLog = new QGroupBox(centralWidget);
        groupBoxLog->setObjectName(QString::fromUtf8("groupBoxLog"));
        groupBoxLog->setGeometry(QRect(247, 219, 306, 162));
        groupBoxLog->setMinimumSize(QSize(300, 150));
        groupBoxLog->setStyleSheet(QString::fromUtf8("font: 75 16pt \"impact\";\n"
"background-color: rgba(255, 205, 206,0.5);"));
        gridLayout = new QGridLayout(groupBoxLog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Label = new QLabel(groupBoxLog);
        Label->setObjectName(QString::fromUtf8("Label"));
        Label->setMinimumSize(QSize(0, 0));
        Label->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Label);

        Label_2 = new QLabel(groupBoxLog);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));
        Label_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Label_2);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Login = new QLineEdit(groupBoxLog);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setStyleSheet(QString::fromUtf8("color:black;"));

        verticalLayout_4->addWidget(Login);

        Password = new QLineEdit(groupBoxLog);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setStyleSheet(QString::fromUtf8("color:black;"));
        Password->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(Password);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_3);

        LoginB = new QPushButton(groupBoxLog);
        LoginB->setObjectName(QString::fromUtf8("LoginB"));
        LoginB->setStyleSheet(QString::fromUtf8("color: black;"));

        verticalLayout_5->addWidget(LoginB);


        gridLayout->addLayout(verticalLayout_5, 0, 1, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        tableView->setGeometry(QRect(0, 0, 800, 331));
        tableView->setMinimumSize(QSize(800, 0));
        QFont font;
        font.setPointSize(1);
        tableView->setFont(font);
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 249);"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(500, 450, 301, 151));
        groupBox->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(300, 50));
        label_5->setMaximumSize(QSize(300, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);

        id = new QLineEdit(groupBox);
        id->setObjectName(QString::fromUtf8("id"));
        id->setMinimumSize(QSize(0, 0));
        id->setMaximumSize(QSize(999999, 9999));
        id->setFont(font1);
        id->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(id);


        verticalLayout_3->addLayout(verticalLayout_6);

        Delete = new QPushButton(groupBox);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setFont(font1);

        verticalLayout_3->addWidget(Delete);

        groupBoxAdd = new QGroupBox(centralWidget);
        groupBoxAdd->setObjectName(QString::fromUtf8("groupBoxAdd"));
        groupBoxAdd->setGeometry(QRect(0, 330, 361, 271));
        verticalLayout_2 = new QVBoxLayout(groupBoxAdd);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBoxAdd);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        Name = new QLineEdit(groupBoxAdd);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setEnabled(true);
        Name->setMinimumSize(QSize(0, 50));
        Name->setMaximumSize(QSize(250, 50));
        QFont font2;
        font2.setItalic(false);
        Name->setFont(font2);
        Name->setCursor(QCursor(Qt::IBeamCursor));
        Name->setTabletTracking(false);
        Name->setContextMenuPolicy(Qt::DefaultContextMenu);
        Name->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        Name->setMaxLength(50);
        Name->setEchoMode(QLineEdit::Normal);
        Name->setAlignment(Qt::AlignCenter);
        Name->setDragEnabled(false);

        horizontalLayout->addWidget(Name);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBoxAdd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        Year = new QLineEdit(groupBoxAdd);
        Year->setObjectName(QString::fromUtf8("Year"));
        Year->setMinimumSize(QSize(0, 50));
        Year->setMaximumSize(QSize(250, 50));
        Year->setFont(font2);
        Year->setContextMenuPolicy(Qt::DefaultContextMenu);
        Year->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        Year->setMaxLength(50);
        Year->setEchoMode(QLineEdit::Normal);
        Year->setAlignment(Qt::AlignCenter);
        Year->setDragEnabled(false);

        horizontalLayout_2->addWidget(Year);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBoxAdd);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);

        Address = new QLineEdit(groupBoxAdd);
        Address->setObjectName(QString::fromUtf8("Address"));
        Address->setMinimumSize(QSize(0, 50));
        Address->setMaximumSize(QSize(250, 50));
        Address->setFont(font2);
        Address->setContextMenuPolicy(Qt::DefaultContextMenu);
        Address->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        Address->setMaxLength(50);
        Address->setEchoMode(QLineEdit::Normal);
        Address->setAlignment(Qt::AlignCenter);
        Address->setDragEnabled(false);

        horizontalLayout_4->addWidget(Address);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBoxAdd);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_4);

        Tel = new QLineEdit(groupBoxAdd);
        Tel->setObjectName(QString::fromUtf8("Tel"));
        Tel->setMinimumSize(QSize(0, 50));
        Tel->setMaximumSize(QSize(250, 50));
        Tel->setFont(font2);
        Tel->setContextMenuPolicy(Qt::DefaultContextMenu);
        Tel->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        Tel->setMaxLength(50);
        Tel->setEchoMode(QLineEdit::Normal);
        Tel->setAlignment(Qt::AlignCenter);
        Tel->setDragEnabled(false);

        horizontalLayout_5->addWidget(Tel);


        verticalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        Admin = new QRadioButton(groupBoxAdd);
        Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->setMinimumSize(QSize(147, 0));
        Admin->setMaximumSize(QSize(147, 16777215));

        horizontalLayout_6->addWidget(Admin);

        Worker = new QRadioButton(groupBoxAdd);
        Worker->setObjectName(QString::fromUtf8("Worker"));
        Worker->setMinimumSize(QSize(147, 0));
        Worker->setMaximumSize(QSize(147, 16777215));
        Worker->setCheckable(true);
        Worker->setChecked(true);

        horizontalLayout_6->addWidget(Worker);


        verticalLayout_2->addLayout(horizontalLayout_6);

        Add = new QPushButton(groupBoxAdd);
        Add->setObjectName(QString::fromUtf8("Add"));

        verticalLayout_2->addWidget(Add);

        groupBoxEd = new QGroupBox(centralWidget);
        groupBoxEd->setObjectName(QString::fromUtf8("groupBoxEd"));
        groupBoxEd->setEnabled(true);
        groupBoxEd->setGeometry(QRect(0, 330, 501, 271));
        groupBoxEd->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";"));
        verticalLayout_10 = new QVBoxLayout(groupBoxEd);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_10 = new QLabel(groupBoxEd);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_10);

        id_2 = new QLineEdit(groupBoxEd);
        id_2->setObjectName(QString::fromUtf8("id_2"));
        id_2->setMinimumSize(QSize(100, 0));
        id_2->setMaximumSize(QSize(400, 99999));
        id_2->setFont(font1);
        id_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        id_2->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        id_2->setMaxLength(50);
        id_2->setEchoMode(QLineEdit::Normal);
        id_2->setAlignment(Qt::AlignCenter);
        id_2->setDragEnabled(false);

        horizontalLayout_12->addWidget(id_2);


        verticalLayout_11->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(groupBoxEd);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_11);

        Name_3 = new QLineEdit(groupBoxEd);
        Name_3->setObjectName(QString::fromUtf8("Name_3"));
        Name_3->setEnabled(true);
        Name_3->setMinimumSize(QSize(100, 0));
        Name_3->setMaximumSize(QSize(400, 99999));
        Name_3->setFont(font1);
        Name_3->setCursor(QCursor(Qt::IBeamCursor));
        Name_3->setTabletTracking(false);
        Name_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        Name_3->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        Name_3->setMaxLength(50);
        Name_3->setEchoMode(QLineEdit::Normal);
        Name_3->setAlignment(Qt::AlignCenter);
        Name_3->setDragEnabled(false);

        horizontalLayout_13->addWidget(Name_3);


        verticalLayout_11->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_12 = new QLabel(groupBoxEd);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_12);

        Year_3 = new QLineEdit(groupBoxEd);
        Year_3->setObjectName(QString::fromUtf8("Year_3"));
        Year_3->setMinimumSize(QSize(100, 0));
        Year_3->setMaximumSize(QSize(400, 99999));
        Year_3->setFont(font1);
        Year_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        Year_3->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        Year_3->setMaxLength(50);
        Year_3->setEchoMode(QLineEdit::Normal);
        Year_3->setAlignment(Qt::AlignCenter);
        Year_3->setDragEnabled(false);

        horizontalLayout_14->addWidget(Year_3);


        verticalLayout_11->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_13 = new QLabel(groupBoxEd);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_13);

        Address_3 = new QLineEdit(groupBoxEd);
        Address_3->setObjectName(QString::fromUtf8("Address_3"));
        Address_3->setMinimumSize(QSize(100, 0));
        Address_3->setMaximumSize(QSize(400, 99999));
        Address_3->setFont(font1);
        Address_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        Address_3->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        Address_3->setMaxLength(50);
        Address_3->setEchoMode(QLineEdit::Normal);
        Address_3->setAlignment(Qt::AlignCenter);
        Address_3->setDragEnabled(false);

        horizontalLayout_15->addWidget(Address_3);


        verticalLayout_11->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_14 = new QLabel(groupBoxEd);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_14);

        Tel_3 = new QLineEdit(groupBoxEd);
        Tel_3->setObjectName(QString::fromUtf8("Tel_3"));
        Tel_3->setMinimumSize(QSize(100, 0));
        Tel_3->setMaximumSize(QSize(400, 99999));
        Tel_3->setFont(font1);
        Tel_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        Tel_3->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        Tel_3->setMaxLength(50);
        Tel_3->setEchoMode(QLineEdit::Normal);
        Tel_3->setAlignment(Qt::AlignCenter);
        Tel_3->setDragEnabled(false);

        horizontalLayout_16->addWidget(Tel_3);


        verticalLayout_11->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_15 = new QLabel(groupBoxEd);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(label_15);

        login = new QLineEdit(groupBoxEd);
        login->setObjectName(QString::fromUtf8("login"));
        login->setMinimumSize(QSize(100, 0));
        login->setMaximumSize(QSize(400, 99999));
        login->setFont(font1);
        login->setContextMenuPolicy(Qt::DefaultContextMenu);
        login->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        login->setMaxLength(50);
        login->setEchoMode(QLineEdit::Normal);
        login->setAlignment(Qt::AlignCenter);
        login->setDragEnabled(false);

        horizontalLayout_17->addWidget(login);


        verticalLayout_11->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_16 = new QLabel(groupBoxEd);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label_16);

        password = new QLineEdit(groupBoxEd);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(100, 0));
        password->setMaximumSize(QSize(400, 99999));
        password->setFont(font1);
        password->setContextMenuPolicy(Qt::DefaultContextMenu);
        password->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        password->setMaxLength(50);
        password->setEchoMode(QLineEdit::Normal);
        password->setAlignment(Qt::AlignCenter);
        password->setDragEnabled(false);

        horizontalLayout_18->addWidget(password);


        verticalLayout_11->addLayout(horizontalLayout_18);


        verticalLayout_10->addLayout(verticalLayout_11);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_5);

        Admin_3 = new QRadioButton(groupBoxEd);
        Admin_3->setObjectName(QString::fromUtf8("Admin_3"));
        Admin_3->setMinimumSize(QSize(147, 0));
        Admin_3->setMaximumSize(QSize(147, 16777215));
        Admin_3->setFont(font1);
        Admin_3->setAcceptDrops(false);
        Admin_3->setCheckable(true);
        Admin_3->setChecked(false);
        Admin_3->setAutoExclusive(true);

        horizontalLayout_19->addWidget(Admin_3);

        Worker_3 = new QRadioButton(groupBoxEd);
        Worker_3->setObjectName(QString::fromUtf8("Worker_3"));
        Worker_3->setMinimumSize(QSize(147, 0));
        Worker_3->setMaximumSize(QSize(147, 16777215));
        Worker_3->setFont(font1);
        Worker_3->setCheckable(true);
        Worker_3->setChecked(false);

        horizontalLayout_19->addWidget(Worker_3);


        verticalLayout_10->addLayout(horizontalLayout_19);

        Edit = new QPushButton(groupBoxEd);
        Edit->setObjectName(QString::fromUtf8("Edit"));
        Edit->setFont(font1);

        verticalLayout_10->addWidget(Edit);

        pushButtonBD = new QPushButton(centralWidget);
        pushButtonBD->setObjectName(QString::fromUtf8("pushButtonBD"));
        pushButtonBD->setGeometry(QRect(500, 330, 301, 121));
        groupBoxButton = new QGroupBox(centralWidget);
        groupBoxButton->setObjectName(QString::fromUtf8("groupBoxButton"));
        groupBoxButton->setGeometry(QRect(360, 340, 141, 261));
        verticalLayout_12 = new QVBoxLayout(groupBoxButton);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        pushButton_2 = new QPushButton(groupBoxButton);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_12->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBoxButton);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_12->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBoxButton);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setMinimumSize(QSize(0, 0));
        pushButton_4->setMouseTracking(false);
        pushButton_4->setTabletTracking(false);
        pushButton_4->setFocusPolicy(Qt::StrongFocus);
        pushButton_4->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton_4->setAcceptDrops(false);
        pushButton_4->setLayoutDirection(Qt::LeftToRight);
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setCheckable(false);
        pushButton_4->setAutoRepeat(false);
        pushButton_4->setAutoExclusive(false);
        pushButton_4->setAutoDefault(false);
        pushButton_4->setFlat(false);

        verticalLayout_12->addWidget(pushButton_4);

        groupBoxCom = new QGroupBox(centralWidget);
        groupBoxCom->setObjectName(QString::fromUtf8("groupBoxCom"));
        groupBoxCom->setGeometry(QRect(0, 330, 361, 271));
        verticalLayout_13 = new QVBoxLayout(groupBoxCom);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        lineEdit = new QLineEdit(groupBoxCom);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 245));

        verticalLayout_13->addWidget(lineEdit);

        pushButtonCom = new QPushButton(groupBoxCom);
        pushButtonCom->setObjectName(QString::fromUtf8("pushButtonCom"));

        verticalLayout_13->addWidget(pushButtonCom);

        up = new QPushButton(centralWidget);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(710, 16, 75, 23));
        down = new QPushButton(centralWidget);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(710, 40, 75, 23));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(130, 10, 551, 161));
        textEdit->setStyleSheet(QString::fromUtf8("<meta charset=\"UTF-8\">"));
        textEdit->setTabChangesFocus(false);
        textEdit->setReadOnly(false);
        textEdit->setOverwriteMode(false);
        MainWindow->setCentralWidget(centralWidget);
        groupBoxCom->raise();
        groupBoxAdd->raise();
        groupBoxEd->raise();
        pushButtonBD->raise();
        tableView->raise();
        groupBox->raise();
        groupBoxLog->raise();
        groupBoxButton->raise();
        up->raise();
        down->raise();
        textEdit->raise();

        retranslateUi(MainWindow);

        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxLog->setTitle(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        Label->setText(QApplication::translate("MainWindow", "Username", nullptr));
        Label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        LoginB->setText(QApplication::translate("MainWindow", "Login", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "ID \320\240\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", nullptr));
        Delete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        label->setText(QApplication::translate("MainWindow", "Name:", nullptr));
#ifndef QT_NO_STATUSTIP
        Name->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Name->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Year:", nullptr));
        Year->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Address:", nullptr));
        Address->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Tel:", nullptr));
        Tel->setText(QString());
        Admin->setText(QApplication::translate("MainWindow", "Admin", nullptr));
        Worker->setText(QApplication::translate("MainWindow", "Worker", nullptr));
        Add->setText(QApplication::translate("MainWindow", "Add", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Id", nullptr));
        id_2->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "Name:", nullptr));
#ifndef QT_NO_STATUSTIP
        Name_3->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Name_3->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Year:", nullptr));
        Year_3->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "Address:", nullptr));
        Address_3->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "Tel:", nullptr));
        Tel_3->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "Login", nullptr));
        login->setText(QString());
        label_16->setText(QApplication::translate("MainWindow", "Password", nullptr));
        password->setText(QString());
        Admin_3->setText(QApplication::translate("MainWindow", "Admin", nullptr));
        Worker_3->setText(QApplication::translate("MainWindow", "Worker", nullptr));
        Edit->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        pushButtonBD->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \320\221\320\224", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\276\320\271 \320\262\320\262\320\276\320\264 \320\272\320\276\320\274\320\260\320\275\320\264", nullptr));
        pushButtonCom->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        up->setText(QApplication::translate("MainWindow", "\342\206\221", nullptr));
        down->setText(QApplication::translate("MainWindow", "\342\206\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
