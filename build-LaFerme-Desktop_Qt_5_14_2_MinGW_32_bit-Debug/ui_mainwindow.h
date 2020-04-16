/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLineEdit *lineEdit_identifiant;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_connexion;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *page_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_ouvriers;
    QPushButton *pushButton_animaux;
    QPushButton *pushButton_nouritures;
    QPushButton *pushButton_materiels;
    QPushButton *pushButton_commandes;
    QPushButton *pushButton_productions;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1054, 497);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(9, -1, 1001, 441));
        stackedWidget->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}\n"
"QLabel {\n"
"font-weight: bold;\n"
"font-size: 15px;\n"
"}"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 40, 201, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: grey;\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;"));
        label->setAlignment(Qt::AlignCenter);
        lineEdit_identifiant = new QLineEdit(page);
        lineEdit_identifiant->setObjectName(QString::fromUtf8("lineEdit_identifiant"));
        lineEdit_identifiant->setGeometry(QRect(300, 120, 201, 41));
        lineEdit_identifiant->setStyleSheet(QString::fromUtf8("padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;"));
        lineEdit_password = new QLineEdit(page);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(300, 210, 201, 41));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_connexion = new QPushButton(page);
        pushButton_connexion->setObjectName(QString::fromUtf8("pushButton_connexion"));
        pushButton_connexion->setGeometry(QRect(344, 312, 121, 31));
        pushButton_connexion->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 126, 101, 20));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 226, 111, 20));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 161, 421));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_ouvriers = new QPushButton(layoutWidget);
        pushButton_ouvriers->setObjectName(QString::fromUtf8("pushButton_ouvriers"));
        pushButton_ouvriers->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 15px;"));

        verticalLayout->addWidget(pushButton_ouvriers);

        pushButton_animaux = new QPushButton(layoutWidget);
        pushButton_animaux->setObjectName(QString::fromUtf8("pushButton_animaux"));
        pushButton_animaux->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 15px;"));

        verticalLayout->addWidget(pushButton_animaux);

        pushButton_nouritures = new QPushButton(layoutWidget);
        pushButton_nouritures->setObjectName(QString::fromUtf8("pushButton_nouritures"));
        pushButton_nouritures->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 15px;"));

        verticalLayout->addWidget(pushButton_nouritures);

        pushButton_materiels = new QPushButton(layoutWidget);
        pushButton_materiels->setObjectName(QString::fromUtf8("pushButton_materiels"));
        pushButton_materiels->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 15px;"));

        verticalLayout->addWidget(pushButton_materiels);

        pushButton_commandes = new QPushButton(layoutWidget);
        pushButton_commandes->setObjectName(QString::fromUtf8("pushButton_commandes"));
        pushButton_commandes->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 15px;"));

        verticalLayout->addWidget(pushButton_commandes);

        pushButton_productions = new QPushButton(layoutWidget);
        pushButton_productions->setObjectName(QString::fromUtf8("pushButton_productions"));
        pushButton_productions->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 15px;"));

        verticalLayout->addWidget(pushButton_productions);

        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1054, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Connection", nullptr));
        pushButton_connexion->setText(QCoreApplication::translate("MainWindow", "Se connecter", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Identifiant", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Mot de passe", nullptr));
        pushButton_ouvriers->setText(QCoreApplication::translate("MainWindow", "Ouvriers", nullptr));
        pushButton_animaux->setText(QCoreApplication::translate("MainWindow", "Animaux", nullptr));
        pushButton_nouritures->setText(QCoreApplication::translate("MainWindow", "Nourritures", nullptr));
        pushButton_materiels->setText(QCoreApplication::translate("MainWindow", "Mat\303\251riels", nullptr));
        pushButton_commandes->setText(QCoreApplication::translate("MainWindow", "Commandes", nullptr));
        pushButton_productions->setText(QCoreApplication::translate("MainWindow", "Productions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
