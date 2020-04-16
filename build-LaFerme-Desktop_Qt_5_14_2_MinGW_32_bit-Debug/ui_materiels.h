/********************************************************************************
** Form generated from reading UI file 'materiels.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIELS_H
#define UI_MATERIELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Materiels
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *pushButton_home;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_ouvriers;
    QPushButton *pushButton_animaux;
    QPushButton *pushButton_nouritures;
    QPushButton *pushButton;
    QPushButton *pushButton_commandes;
    QPushButton *pushButton_productions;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_travail;
    QPushButton *pushButton_entretien;
    QWidget *page_3;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *Affichage;
    QPushButton *pushButton_trier_t;
    QTableView *tab_mat_t;
    QLabel *label_5;
    QLineEdit *lineEdit_recherche;
    QLineEdit *lineEdit_qte_ta;
    QLabel *label_nom_ta;
    QLineEdit *lineEdit_date_ta;
    QPushButton *pushButton_ajouter_t;
    QLineEdit *lineEdit_id_ta;
    QLabel *label_date_ta;
    QLabel *label_qte_ta;
    QLineEdit *lineEdit_nom_ta;
    QLabel *label_id_ta;
    QWidget *Modifier;
    QLineEdit *lineEdit_id_ts_2;
    QLabel *label_date_ts;
    QLineEdit *lineEdit_qte_ts;
    QLabel *label_qte_ts;
    QLineEdit *lineEdit_date_ts;
    QLabel *label_nom_ts;
    QLabel *label_id_ts_2;
    QPushButton *pushButton_modifier_t;
    QLineEdit *lineEdit_nom_ts;
    QWidget *Supprimer;
    QLabel *label_id_ts;
    QLineEdit *lineEdit_id_ts;
    QPushButton *pushButton_sup_t;
    QPushButton *pushButton_retour;
    QWidget *page_2;
    QLabel *label_2;
    QTabWidget *tabWidget_2;
    QWidget *Affichage_2;
    QPushButton *pushButton_trier;
    QTableView *tab_mat;
    QWidget *Ajouter_2;
    QPushButton *pushButton_ajouter;
    QLabel *label_id;
    QLabel *label_nom;
    QLabel *label_qte;
    QLabel *label_date;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_qte;
    QLineEdit *lineEdit_date;
    QWidget *Modifier_2;
    QLabel *label_id_5;
    QPushButton *pushButton_modifier;
    QLineEdit *lineEdit_nom_3;
    QLineEdit *lineEdit_qte_3;
    QLabel *label_qte_3;
    QLineEdit *lineEdit_date_3;
    QLabel *label_nom_3;
    QLineEdit *lineEdit_id_5;
    QLabel *label_date_3;
    QWidget *Supprimer_2;
    QLineEdit *lineEdit_id_2;
    QLabel *label_id_2;
    QPushButton *pushButton_sup;
    QWidget *Rechercher_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QTableView *tab_mat_3;
    QPushButton *pushButton_retour_2;

    void setupUi(QWidget *Materiels)
    {
        if (Materiels->objectName().isEmpty())
            Materiels->setObjectName(QString::fromUtf8("Materiels"));
        Materiels->resize(1059, 526);
        Materiels->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
""));
        stackedWidget = new QStackedWidget(Materiels);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 9, 1021, 491));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 15, 101, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font-size: 20px;"));
        pushButton_home = new QPushButton(page);
        pushButton_home->setObjectName(QString::fromUtf8("pushButton_home"));
        pushButton_home->setGeometry(QRect(10, 0, 75, 23));
        pushButton_home->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 11px;"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 161, 421));
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

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 15px;"));

        verticalLayout->addWidget(pushButton);

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

        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 250, 109, 54));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_travail = new QPushButton(layoutWidget1);
        pushButton_travail->setObjectName(QString::fromUtf8("pushButton_travail"));
        pushButton_travail->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 12px;"));

        verticalLayout_2->addWidget(pushButton_travail);

        pushButton_entretien = new QPushButton(layoutWidget1);
        pushButton_entretien->setObjectName(QString::fromUtf8("pushButton_entretien"));
        pushButton_entretien->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 12px;"));

        verticalLayout_2->addWidget(pushButton_entretien);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 20, 131, 31));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 15px;"));
        tabWidget = new QTabWidget(page_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(60, 70, 951, 411));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: grey;"));
        Affichage = new QWidget();
        Affichage->setObjectName(QString::fromUtf8("Affichage"));
        pushButton_trier_t = new QPushButton(Affichage);
        pushButton_trier_t->setObjectName(QString::fromUtf8("pushButton_trier_t"));
        pushButton_trier_t->setGeometry(QRect(350, 10, 75, 23));
        pushButton_trier_t->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        tab_mat_t = new QTableView(Affichage);
        tab_mat_t->setObjectName(QString::fromUtf8("tab_mat_t"));
        tab_mat_t->setGeometry(QRect(10, 50, 451, 311));
        tab_mat_t->setStyleSheet(QString::fromUtf8("\n"
"background: white;"));
        label_5 = new QLabel(Affichage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(8, 11, 111, 20));
        lineEdit_recherche = new QLineEdit(Affichage);
        lineEdit_recherche->setObjectName(QString::fromUtf8("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(120, 10, 121, 21));
        lineEdit_qte_ta = new QLineEdit(Affichage);
        lineEdit_qte_ta->setObjectName(QString::fromUtf8("lineEdit_qte_ta"));
        lineEdit_qte_ta->setGeometry(QRect(750, 150, 113, 20));
        label_nom_ta = new QLabel(Affichage);
        label_nom_ta->setObjectName(QString::fromUtf8("label_nom_ta"));
        label_nom_ta->setGeometry(QRect(660, 110, 47, 14));
        label_nom_ta->setStyleSheet(QString::fromUtf8(""));
        lineEdit_date_ta = new QLineEdit(Affichage);
        lineEdit_date_ta->setObjectName(QString::fromUtf8("lineEdit_date_ta"));
        lineEdit_date_ta->setGeometry(QRect(750, 190, 113, 20));
        pushButton_ajouter_t = new QPushButton(Affichage);
        pushButton_ajouter_t->setObjectName(QString::fromUtf8("pushButton_ajouter_t"));
        pushButton_ajouter_t->setGeometry(QRect(790, 250, 75, 23));
        pushButton_ajouter_t->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        lineEdit_id_ta = new QLineEdit(Affichage);
        lineEdit_id_ta->setObjectName(QString::fromUtf8("lineEdit_id_ta"));
        lineEdit_id_ta->setGeometry(QRect(750, 70, 113, 20));
        label_date_ta = new QLabel(Affichage);
        label_date_ta->setObjectName(QString::fromUtf8("label_date_ta"));
        label_date_ta->setGeometry(QRect(646, 190, 61, 20));
        label_qte_ta = new QLabel(Affichage);
        label_qte_ta->setObjectName(QString::fromUtf8("label_qte_ta"));
        label_qte_ta->setGeometry(QRect(590, 150, 141, 20));
        lineEdit_nom_ta = new QLineEdit(Affichage);
        lineEdit_nom_ta->setObjectName(QString::fromUtf8("lineEdit_nom_ta"));
        lineEdit_nom_ta->setGeometry(QRect(750, 110, 113, 20));
        label_id_ta = new QLabel(Affichage);
        label_id_ta->setObjectName(QString::fromUtf8("label_id_ta"));
        label_id_ta->setGeometry(QRect(660, 70, 47, 14));
        label_id_ta->setStyleSheet(QString::fromUtf8(""));
        tabWidget->addTab(Affichage, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QString::fromUtf8("Modifier"));
        lineEdit_id_ts_2 = new QLineEdit(Modifier);
        lineEdit_id_ts_2->setObjectName(QString::fromUtf8("lineEdit_id_ts_2"));
        lineEdit_id_ts_2->setGeometry(QRect(180, 50, 113, 20));
        label_date_ts = new QLabel(Modifier);
        label_date_ts->setObjectName(QString::fromUtf8("label_date_ts"));
        label_date_ts->setGeometry(QRect(76, 170, 61, 20));
        lineEdit_qte_ts = new QLineEdit(Modifier);
        lineEdit_qte_ts->setObjectName(QString::fromUtf8("lineEdit_qte_ts"));
        lineEdit_qte_ts->setGeometry(QRect(180, 130, 113, 20));
        label_qte_ts = new QLabel(Modifier);
        label_qte_ts->setObjectName(QString::fromUtf8("label_qte_ts"));
        label_qte_ts->setGeometry(QRect(16, 130, 141, 20));
        lineEdit_date_ts = new QLineEdit(Modifier);
        lineEdit_date_ts->setObjectName(QString::fromUtf8("lineEdit_date_ts"));
        lineEdit_date_ts->setGeometry(QRect(180, 170, 113, 20));
        label_nom_ts = new QLabel(Modifier);
        label_nom_ts->setObjectName(QString::fromUtf8("label_nom_ts"));
        label_nom_ts->setGeometry(QRect(90, 90, 47, 14));
        label_nom_ts->setStyleSheet(QString::fromUtf8(""));
        label_id_ts_2 = new QLabel(Modifier);
        label_id_ts_2->setObjectName(QString::fromUtf8("label_id_ts_2"));
        label_id_ts_2->setGeometry(QRect(90, 50, 47, 14));
        label_id_ts_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_modifier_t = new QPushButton(Modifier);
        pushButton_modifier_t->setObjectName(QString::fromUtf8("pushButton_modifier_t"));
        pushButton_modifier_t->setGeometry(QRect(220, 230, 75, 23));
        pushButton_modifier_t->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        lineEdit_nom_ts = new QLineEdit(Modifier);
        lineEdit_nom_ts->setObjectName(QString::fromUtf8("lineEdit_nom_ts"));
        lineEdit_nom_ts->setGeometry(QRect(180, 90, 113, 20));
        tabWidget->addTab(Modifier, QString());
        Supprimer = new QWidget();
        Supprimer->setObjectName(QString::fromUtf8("Supprimer"));
        label_id_ts = new QLabel(Supprimer);
        label_id_ts->setObjectName(QString::fromUtf8("label_id_ts"));
        label_id_ts->setGeometry(QRect(80, 60, 47, 14));
        lineEdit_id_ts = new QLineEdit(Supprimer);
        lineEdit_id_ts->setObjectName(QString::fromUtf8("lineEdit_id_ts"));
        lineEdit_id_ts->setGeometry(QRect(130, 49, 131, 31));
        pushButton_sup_t = new QPushButton(Supprimer);
        pushButton_sup_t->setObjectName(QString::fromUtf8("pushButton_sup_t"));
        pushButton_sup_t->setGeometry(QRect(170, 190, 75, 23));
        pushButton_sup_t->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        tabWidget->addTab(Supprimer, QString());
        pushButton_retour = new QPushButton(page_3);
        pushButton_retour->setObjectName(QString::fromUtf8("pushButton_retour"));
        pushButton_retour->setGeometry(QRect(20, 30, 75, 23));
        pushButton_retour->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 11px;"));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 20, 131, 21));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 15px;"));
        tabWidget_2 = new QTabWidget(page_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(50, 80, 681, 391));
        tabWidget_2->setStyleSheet(QString::fromUtf8("background-color: grey;\n"
""));
        Affichage_2 = new QWidget();
        Affichage_2->setObjectName(QString::fromUtf8("Affichage_2"));
        pushButton_trier = new QPushButton(Affichage_2);
        pushButton_trier->setObjectName(QString::fromUtf8("pushButton_trier"));
        pushButton_trier->setGeometry(QRect(490, 10, 75, 23));
        pushButton_trier->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        tab_mat = new QTableView(Affichage_2);
        tab_mat->setObjectName(QString::fromUtf8("tab_mat"));
        tab_mat->setGeometry(QRect(30, 30, 591, 291));
        tab_mat->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
"border-radius: 40px;\n"
"background: white;"));
        tabWidget_2->addTab(Affichage_2, QString());
        Ajouter_2 = new QWidget();
        Ajouter_2->setObjectName(QString::fromUtf8("Ajouter_2"));
        Ajouter_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_ajouter = new QPushButton(Ajouter_2);
        pushButton_ajouter->setObjectName(QString::fromUtf8("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(230, 220, 75, 23));
        pushButton_ajouter->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        label_id = new QLabel(Ajouter_2);
        label_id->setObjectName(QString::fromUtf8("label_id"));
        label_id->setGeometry(QRect(100, 40, 47, 14));
        label_id->setStyleSheet(QString::fromUtf8(""));
        label_nom = new QLabel(Ajouter_2);
        label_nom->setObjectName(QString::fromUtf8("label_nom"));
        label_nom->setGeometry(QRect(100, 80, 47, 14));
        label_nom->setStyleSheet(QString::fromUtf8(""));
        label_qte = new QLabel(Ajouter_2);
        label_qte->setObjectName(QString::fromUtf8("label_qte"));
        label_qte->setGeometry(QRect(100, 120, 47, 14));
        label_date = new QLabel(Ajouter_2);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(86, 160, 61, 20));
        lineEdit_id = new QLineEdit(Ajouter_2);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(190, 40, 113, 20));
        lineEdit_id->setStyleSheet(QString::fromUtf8(""));
        lineEdit_nom = new QLineEdit(Ajouter_2);
        lineEdit_nom->setObjectName(QString::fromUtf8("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(190, 80, 113, 20));
        lineEdit_qte = new QLineEdit(Ajouter_2);
        lineEdit_qte->setObjectName(QString::fromUtf8("lineEdit_qte"));
        lineEdit_qte->setGeometry(QRect(190, 120, 113, 20));
        lineEdit_date = new QLineEdit(Ajouter_2);
        lineEdit_date->setObjectName(QString::fromUtf8("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(190, 160, 113, 20));
        tabWidget_2->addTab(Ajouter_2, QString());
        Modifier_2 = new QWidget();
        Modifier_2->setObjectName(QString::fromUtf8("Modifier_2"));
        label_id_5 = new QLabel(Modifier_2);
        label_id_5->setObjectName(QString::fromUtf8("label_id_5"));
        label_id_5->setGeometry(QRect(100, 50, 47, 14));
        label_id_5->setStyleSheet(QString::fromUtf8(""));
        pushButton_modifier = new QPushButton(Modifier_2);
        pushButton_modifier->setObjectName(QString::fromUtf8("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(230, 230, 75, 23));
        pushButton_modifier->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        lineEdit_nom_3 = new QLineEdit(Modifier_2);
        lineEdit_nom_3->setObjectName(QString::fromUtf8("lineEdit_nom_3"));
        lineEdit_nom_3->setGeometry(QRect(190, 90, 113, 20));
        lineEdit_qte_3 = new QLineEdit(Modifier_2);
        lineEdit_qte_3->setObjectName(QString::fromUtf8("lineEdit_qte_3"));
        lineEdit_qte_3->setGeometry(QRect(190, 130, 113, 20));
        label_qte_3 = new QLabel(Modifier_2);
        label_qte_3->setObjectName(QString::fromUtf8("label_qte_3"));
        label_qte_3->setGeometry(QRect(100, 130, 47, 14));
        lineEdit_date_3 = new QLineEdit(Modifier_2);
        lineEdit_date_3->setObjectName(QString::fromUtf8("lineEdit_date_3"));
        lineEdit_date_3->setGeometry(QRect(190, 170, 113, 20));
        label_nom_3 = new QLabel(Modifier_2);
        label_nom_3->setObjectName(QString::fromUtf8("label_nom_3"));
        label_nom_3->setGeometry(QRect(100, 90, 47, 14));
        label_nom_3->setStyleSheet(QString::fromUtf8(""));
        lineEdit_id_5 = new QLineEdit(Modifier_2);
        lineEdit_id_5->setObjectName(QString::fromUtf8("lineEdit_id_5"));
        lineEdit_id_5->setGeometry(QRect(190, 50, 113, 20));
        label_date_3 = new QLabel(Modifier_2);
        label_date_3->setObjectName(QString::fromUtf8("label_date_3"));
        label_date_3->setGeometry(QRect(86, 170, 61, 20));
        tabWidget_2->addTab(Modifier_2, QString());
        Supprimer_2 = new QWidget();
        Supprimer_2->setObjectName(QString::fromUtf8("Supprimer_2"));
        lineEdit_id_2 = new QLineEdit(Supprimer_2);
        lineEdit_id_2->setObjectName(QString::fromUtf8("lineEdit_id_2"));
        lineEdit_id_2->setGeometry(QRect(130, 50, 131, 31));
        label_id_2 = new QLabel(Supprimer_2);
        label_id_2->setObjectName(QString::fromUtf8("label_id_2"));
        label_id_2->setGeometry(QRect(80, 61, 47, 14));
        pushButton_sup = new QPushButton(Supprimer_2);
        pushButton_sup->setObjectName(QString::fromUtf8("pushButton_sup"));
        pushButton_sup->setGeometry(QRect(170, 191, 75, 23));
        pushButton_sup->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        tabWidget_2->addTab(Supprimer_2, QString());
        Rechercher_2 = new QWidget();
        Rechercher_2->setObjectName(QString::fromUtf8("Rechercher_2"));
        lineEdit = new QLineEdit(Rechercher_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(432, 9, 121, 21));
        label_4 = new QLabel(Rechercher_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 10, 111, 20));
        tab_mat_3 = new QTableView(Rechercher_2);
        tab_mat_3->setObjectName(QString::fromUtf8("tab_mat_3"));
        tab_mat_3->setGeometry(QRect(30, 30, 591, 291));
        tab_mat_3->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
"border-radius: 40px;\n"
"background: white;"));
        tabWidget_2->addTab(Rechercher_2, QString());
        pushButton_retour_2 = new QPushButton(page_2);
        pushButton_retour_2->setObjectName(QString::fromUtf8("pushButton_retour_2"));
        pushButton_retour_2->setGeometry(QRect(20, 30, 75, 23));
        pushButton_retour_2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 11px;"));
        stackedWidget->addWidget(page_2);

        retranslateUi(Materiels);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Materiels);
    } // setupUi

    void retranslateUi(QWidget *Materiels)
    {
        Materiels->setWindowTitle(QCoreApplication::translate("Materiels", "Form", nullptr));
        label->setText(QCoreApplication::translate("Materiels", "Materiels", nullptr));
        pushButton_home->setText(QCoreApplication::translate("Materiels", "Accueil", nullptr));
        pushButton_ouvriers->setText(QCoreApplication::translate("Materiels", "Ouvriers", nullptr));
        pushButton_animaux->setText(QCoreApplication::translate("Materiels", "Animaux", nullptr));
        pushButton_nouritures->setText(QCoreApplication::translate("Materiels", "Nourritures", nullptr));
        pushButton->setText(QCoreApplication::translate("Materiels", "Materiels", nullptr));
        pushButton_commandes->setText(QCoreApplication::translate("Materiels", "Commandes", nullptr));
        pushButton_productions->setText(QCoreApplication::translate("Materiels", "Productions", nullptr));
        pushButton_travail->setText(QCoreApplication::translate("Materiels", "Materiels Travail", nullptr));
        pushButton_entretien->setText(QCoreApplication::translate("Materiels", "Materiels Entretien", nullptr));
        label_3->setText(QCoreApplication::translate("Materiels", "Materiels Travail", nullptr));
        pushButton_trier_t->setText(QCoreApplication::translate("Materiels", "Trier", nullptr));
        label_5->setText(QCoreApplication::translate("Materiels", "Nom \303\240 rechercher", nullptr));
        label_nom_ta->setText(QCoreApplication::translate("Materiels", "Nom", nullptr));
        pushButton_ajouter_t->setText(QCoreApplication::translate("Materiels", "Ajouter", nullptr));
        label_date_ta->setText(QCoreApplication::translate("Materiels", "Date_Ajout", nullptr));
        label_qte_ta->setText(QCoreApplication::translate("Materiels", "Etat en Panne (1-oui 0-Non)", nullptr));
        label_id_ta->setText(QCoreApplication::translate("Materiels", "Id", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Affichage), QCoreApplication::translate("Materiels", "Affichage", nullptr));
        label_date_ts->setText(QCoreApplication::translate("Materiels", "Date_Ajout", nullptr));
        label_qte_ts->setText(QCoreApplication::translate("Materiels", "Etat en Panne (1-oui 0-Non)", nullptr));
        label_nom_ts->setText(QCoreApplication::translate("Materiels", "Nom", nullptr));
        label_id_ts_2->setText(QCoreApplication::translate("Materiels", "Id", nullptr));
        pushButton_modifier_t->setText(QCoreApplication::translate("Materiels", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Modifier), QCoreApplication::translate("Materiels", "Modifier", nullptr));
        label_id_ts->setText(QCoreApplication::translate("Materiels", "ID", nullptr));
        pushButton_sup_t->setText(QCoreApplication::translate("Materiels", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Supprimer), QCoreApplication::translate("Materiels", "Supprimer", nullptr));
        pushButton_retour->setText(QCoreApplication::translate("Materiels", "Retour", nullptr));
        label_2->setText(QCoreApplication::translate("Materiels", "Materiels Entretien", nullptr));
        pushButton_trier->setText(QCoreApplication::translate("Materiels", "Trier", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Affichage_2), QCoreApplication::translate("Materiels", "Affichage", nullptr));
        pushButton_ajouter->setText(QCoreApplication::translate("Materiels", "Ajouter", nullptr));
        label_id->setText(QCoreApplication::translate("Materiels", "Id", nullptr));
        label_nom->setText(QCoreApplication::translate("Materiels", "Nom", nullptr));
        label_qte->setText(QCoreApplication::translate("Materiels", "Quantit\303\251", nullptr));
        label_date->setText(QCoreApplication::translate("Materiels", "Date_Ajout", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Ajouter_2), QCoreApplication::translate("Materiels", "Ajouter", nullptr));
        label_id_5->setText(QCoreApplication::translate("Materiels", "Id", nullptr));
        pushButton_modifier->setText(QCoreApplication::translate("Materiels", "Modifier", nullptr));
        label_qte_3->setText(QCoreApplication::translate("Materiels", "Quantit\303\251", nullptr));
        label_nom_3->setText(QCoreApplication::translate("Materiels", "Nom", nullptr));
        label_date_3->setText(QCoreApplication::translate("Materiels", "Date_Ajout", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Modifier_2), QCoreApplication::translate("Materiels", "Modifier", nullptr));
        label_id_2->setText(QCoreApplication::translate("Materiels", "ID", nullptr));
        pushButton_sup->setText(QCoreApplication::translate("Materiels", "Supprimer", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Supprimer_2), QCoreApplication::translate("Materiels", "Supprimer", nullptr));
        label_4->setText(QCoreApplication::translate("Materiels", "Nom \303\240 rechercher", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Rechercher_2), QCoreApplication::translate("Materiels", "Rechercher", nullptr));
        pushButton_retour_2->setText(QCoreApplication::translate("Materiels", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Materiels: public Ui_Materiels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIELS_H
