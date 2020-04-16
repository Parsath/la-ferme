/********************************************************************************
** Form generated from reading UI file 'g_animaux.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_G_ANIMAUX_H
#define UI_G_ANIMAUX_H

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

class Ui_G_animaux
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
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_ani;
    QPushButton *pushButton_abris;
    QWidget *page_3;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *Affichage;
    QPushButton *pushButton_trier_ani;
    QTableView *tab_ani;
    QWidget *Ajouter;
    QPushButton *pushButton_ajouter_ouv;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_id_ta_6;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLabel *label_pwd;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_id_ani;
    QLineEdit *lineEdit_type_ani;
    QLineEdit *lineEdit_qualite;
    QLineEdit *lineEdit_prix;
    QWidget *Modifier;
    QPushButton *pushButton_modifier_ani;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_id_ta_9;
    QLabel *label_nom_3;
    QLabel *label_prenom_3;
    QLabel *label_pwd_3;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEdit_id_ani_modif;
    QLineEdit *lineEdit_type_ani_modif;
    QLineEdit *lineEdit_qualite_modif;
    QLineEdit *lineEdit_prix_modif;
    QWidget *Supprimer;
    QLabel *label_id_ts;
    QLineEdit *lineEdit_id_ani_sup;
    QPushButton *pushButton_sup_ani;
    QWidget *Rechercher;
    QLabel *label_5;
    QLineEdit *lineEdit_recherche_ani;
    QTableView *tab_ani_rech;
    QPushButton *pushButton_retour;
    QWidget *page_2;
    QLabel *label_2;
    QTabWidget *tabWidget_2;
    QWidget *Affichage_2;
    QPushButton *pushButton_trier_abris;
    QTableView *tab_abris;
    QWidget *Ajouter_2;
    QPushButton *pushButton_ajouter_abris;
    QWidget *widget;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_id_ta;
    QLabel *label_nom_ta;
    QLabel *label_qte_ta;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *lineEdit_id_conges;
    QLineEdit *lineEdit_Date_depart;
    QLineEdit *lineEdit_Date_retour;
    QWidget *Modifier_2;
    QPushButton *pushButton_modifier_abris;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *lineEdit_id_conges_2;
    QLineEdit *lineEdit_Date_depart_2;
    QLineEdit *lineEdit_Date_retour_2;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_id_ta_2;
    QLabel *label_nom_ta_2;
    QLabel *label_qte_ta_2;
    QWidget *Supprimer_2;
    QLineEdit *lineEdit_id_supp_abris;
    QLabel *label_id_2;
    QPushButton *pushButton_sup_abris;
    QWidget *Rechercher_2;
    QLineEdit *lineEdit_abris_cong;
    QLabel *label_4;
    QTableView *tab_abris_rech;
    QPushButton *pushButton_retour_2;

    void setupUi(QWidget *G_animaux)
    {
        if (G_animaux->objectName().isEmpty())
            G_animaux->setObjectName(QString::fromUtf8("G_animaux"));
        G_animaux->resize(800, 500);
        G_animaux->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);"));
        stackedWidget = new QStackedWidget(G_animaux);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 20, 771, 461));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 10, 101, 31));
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

        layoutWidget_2 = new QWidget(page);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(170, 120, 109, 54));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_ani = new QPushButton(layoutWidget_2);
        pushButton_ani->setObjectName(QString::fromUtf8("pushButton_ani"));
        pushButton_ani->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 12px;"));

        verticalLayout_2->addWidget(pushButton_ani);

        pushButton_abris = new QPushButton(layoutWidget_2);
        pushButton_abris->setObjectName(QString::fromUtf8("pushButton_abris"));
        pushButton_abris->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 12px;"));

        verticalLayout_2->addWidget(pushButton_abris);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 30, 131, 31));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 15px;"));
        tabWidget = new QTabWidget(page_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(60, 100, 681, 371));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: grey;"));
        Affichage = new QWidget();
        Affichage->setObjectName(QString::fromUtf8("Affichage"));
        pushButton_trier_ani = new QPushButton(Affichage);
        pushButton_trier_ani->setObjectName(QString::fromUtf8("pushButton_trier_ani"));
        pushButton_trier_ani->setGeometry(QRect(510, 10, 75, 23));
        pushButton_trier_ani->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        tab_ani = new QTableView(Affichage);
        tab_ani->setObjectName(QString::fromUtf8("tab_ani"));
        tab_ani->setGeometry(QRect(30, 40, 591, 291));
        tab_ani->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
"border-radius: 40px;\n"
"background: white;"));
        tabWidget->addTab(Affichage, QString());
        Ajouter = new QWidget();
        Ajouter->setObjectName(QString::fromUtf8("Ajouter"));
        pushButton_ajouter_ouv = new QPushButton(Ajouter);
        pushButton_ajouter_ouv->setObjectName(QString::fromUtf8("pushButton_ajouter_ouv"));
        pushButton_ajouter_ouv->setGeometry(QRect(220, 260, 75, 23));
        pushButton_ajouter_ouv->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        layoutWidget_3 = new QWidget(Ajouter);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 30, 81, 211));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_id_ta_6 = new QLabel(layoutWidget_3);
        label_id_ta_6->setObjectName(QString::fromUtf8("label_id_ta_6"));
        label_id_ta_6->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(label_id_ta_6);

        label_nom = new QLabel(layoutWidget_3);
        label_nom->setObjectName(QString::fromUtf8("label_nom"));
        label_nom->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(label_nom);

        label_prenom = new QLabel(layoutWidget_3);
        label_prenom->setObjectName(QString::fromUtf8("label_prenom"));

        verticalLayout_3->addWidget(label_prenom);

        label_pwd = new QLabel(layoutWidget_3);
        label_pwd->setObjectName(QString::fromUtf8("label_pwd"));

        verticalLayout_3->addWidget(label_pwd);

        layoutWidget_4 = new QWidget(Ajouter);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(120, 30, 171, 211));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_id_ani = new QLineEdit(layoutWidget_4);
        lineEdit_id_ani->setObjectName(QString::fromUtf8("lineEdit_id_ani"));

        verticalLayout_4->addWidget(lineEdit_id_ani);

        lineEdit_type_ani = new QLineEdit(layoutWidget_4);
        lineEdit_type_ani->setObjectName(QString::fromUtf8("lineEdit_type_ani"));

        verticalLayout_4->addWidget(lineEdit_type_ani);

        lineEdit_qualite = new QLineEdit(layoutWidget_4);
        lineEdit_qualite->setObjectName(QString::fromUtf8("lineEdit_qualite"));

        verticalLayout_4->addWidget(lineEdit_qualite);

        lineEdit_prix = new QLineEdit(layoutWidget_4);
        lineEdit_prix->setObjectName(QString::fromUtf8("lineEdit_prix"));

        verticalLayout_4->addWidget(lineEdit_prix);

        tabWidget->addTab(Ajouter, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QString::fromUtf8("Modifier"));
        pushButton_modifier_ani = new QPushButton(Modifier);
        pushButton_modifier_ani->setObjectName(QString::fromUtf8("pushButton_modifier_ani"));
        pushButton_modifier_ani->setGeometry(QRect(220, 260, 75, 23));
        pushButton_modifier_ani->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        layoutWidget_5 = new QWidget(Modifier);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(60, 30, 81, 211));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_id_ta_9 = new QLabel(layoutWidget_5);
        label_id_ta_9->setObjectName(QString::fromUtf8("label_id_ta_9"));
        label_id_ta_9->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_7->addWidget(label_id_ta_9);

        label_nom_3 = new QLabel(layoutWidget_5);
        label_nom_3->setObjectName(QString::fromUtf8("label_nom_3"));
        label_nom_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_7->addWidget(label_nom_3);

        label_prenom_3 = new QLabel(layoutWidget_5);
        label_prenom_3->setObjectName(QString::fromUtf8("label_prenom_3"));

        verticalLayout_7->addWidget(label_prenom_3);

        label_pwd_3 = new QLabel(layoutWidget_5);
        label_pwd_3->setObjectName(QString::fromUtf8("label_pwd_3"));

        verticalLayout_7->addWidget(label_pwd_3);

        layoutWidget_6 = new QWidget(Modifier);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(150, 30, 171, 211));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        lineEdit_id_ani_modif = new QLineEdit(layoutWidget_6);
        lineEdit_id_ani_modif->setObjectName(QString::fromUtf8("lineEdit_id_ani_modif"));

        verticalLayout_8->addWidget(lineEdit_id_ani_modif);

        lineEdit_type_ani_modif = new QLineEdit(layoutWidget_6);
        lineEdit_type_ani_modif->setObjectName(QString::fromUtf8("lineEdit_type_ani_modif"));

        verticalLayout_8->addWidget(lineEdit_type_ani_modif);

        lineEdit_qualite_modif = new QLineEdit(layoutWidget_6);
        lineEdit_qualite_modif->setObjectName(QString::fromUtf8("lineEdit_qualite_modif"));

        verticalLayout_8->addWidget(lineEdit_qualite_modif);

        lineEdit_prix_modif = new QLineEdit(layoutWidget_6);
        lineEdit_prix_modif->setObjectName(QString::fromUtf8("lineEdit_prix_modif"));

        verticalLayout_8->addWidget(lineEdit_prix_modif);

        tabWidget->addTab(Modifier, QString());
        Supprimer = new QWidget();
        Supprimer->setObjectName(QString::fromUtf8("Supprimer"));
        label_id_ts = new QLabel(Supprimer);
        label_id_ts->setObjectName(QString::fromUtf8("label_id_ts"));
        label_id_ts->setGeometry(QRect(80, 60, 47, 14));
        lineEdit_id_ani_sup = new QLineEdit(Supprimer);
        lineEdit_id_ani_sup->setObjectName(QString::fromUtf8("lineEdit_id_ani_sup"));
        lineEdit_id_ani_sup->setGeometry(QRect(130, 49, 131, 31));
        pushButton_sup_ani = new QPushButton(Supprimer);
        pushButton_sup_ani->setObjectName(QString::fromUtf8("pushButton_sup_ani"));
        pushButton_sup_ani->setGeometry(QRect(170, 190, 75, 23));
        pushButton_sup_ani->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        tabWidget->addTab(Supprimer, QString());
        Rechercher = new QWidget();
        Rechercher->setObjectName(QString::fromUtf8("Rechercher"));
        label_5 = new QLabel(Rechercher);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 10, 111, 20));
        lineEdit_recherche_ani = new QLineEdit(Rechercher);
        lineEdit_recherche_ani->setObjectName(QString::fromUtf8("lineEdit_recherche_ani"));
        lineEdit_recherche_ani->setGeometry(QRect(422, 9, 121, 21));
        tab_ani_rech = new QTableView(Rechercher);
        tab_ani_rech->setObjectName(QString::fromUtf8("tab_ani_rech"));
        tab_ani_rech->setGeometry(QRect(30, 40, 591, 291));
        tab_ani_rech->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
"border-radius: 40px;\n"
"background: white;"));
        tabWidget->addTab(Rechercher, QString());
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
        label_2->setGeometry(QRect(330, 40, 131, 21));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 15px;"));
        tabWidget_2 = new QTabWidget(page_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(50, 100, 681, 371));
        tabWidget_2->setStyleSheet(QString::fromUtf8("background-color: grey;\n"
""));
        Affichage_2 = new QWidget();
        Affichage_2->setObjectName(QString::fromUtf8("Affichage_2"));
        pushButton_trier_abris = new QPushButton(Affichage_2);
        pushButton_trier_abris->setObjectName(QString::fromUtf8("pushButton_trier_abris"));
        pushButton_trier_abris->setGeometry(QRect(490, 10, 75, 23));
        pushButton_trier_abris->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        tab_abris = new QTableView(Affichage_2);
        tab_abris->setObjectName(QString::fromUtf8("tab_abris"));
        tab_abris->setGeometry(QRect(30, 30, 591, 291));
        tab_abris->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
"border-radius: 40px;\n"
"background: white;"));
        tabWidget_2->addTab(Affichage_2, QString());
        Ajouter_2 = new QWidget();
        Ajouter_2->setObjectName(QString::fromUtf8("Ajouter_2"));
        Ajouter_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_ajouter_abris = new QPushButton(Ajouter_2);
        pushButton_ajouter_abris->setObjectName(QString::fromUtf8("pushButton_ajouter_abris"));
        pushButton_ajouter_abris->setGeometry(QRect(220, 260, 75, 23));
        pushButton_ajouter_abris->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        widget = new QWidget(Ajouter_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(76, 30, 101, 201));
        verticalLayout_9 = new QVBoxLayout(widget);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_id_ta = new QLabel(widget);
        label_id_ta->setObjectName(QString::fromUtf8("label_id_ta"));
        label_id_ta->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_9->addWidget(label_id_ta);

        label_nom_ta = new QLabel(widget);
        label_nom_ta->setObjectName(QString::fromUtf8("label_nom_ta"));
        label_nom_ta->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_9->addWidget(label_nom_ta);

        label_qte_ta = new QLabel(widget);
        label_qte_ta->setObjectName(QString::fromUtf8("label_qte_ta"));

        verticalLayout_9->addWidget(label_qte_ta);

        widget1 = new QWidget(Ajouter_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(190, 30, 141, 201));
        verticalLayout_11 = new QVBoxLayout(widget1);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        lineEdit_id_conges = new QLineEdit(widget1);
        lineEdit_id_conges->setObjectName(QString::fromUtf8("lineEdit_id_conges"));

        verticalLayout_11->addWidget(lineEdit_id_conges);

        lineEdit_Date_depart = new QLineEdit(widget1);
        lineEdit_Date_depart->setObjectName(QString::fromUtf8("lineEdit_Date_depart"));

        verticalLayout_11->addWidget(lineEdit_Date_depart);

        lineEdit_Date_retour = new QLineEdit(widget1);
        lineEdit_Date_retour->setObjectName(QString::fromUtf8("lineEdit_Date_retour"));

        verticalLayout_11->addWidget(lineEdit_Date_retour);

        tabWidget_2->addTab(Ajouter_2, QString());
        Modifier_2 = new QWidget();
        Modifier_2->setObjectName(QString::fromUtf8("Modifier_2"));
        pushButton_modifier_abris = new QPushButton(Modifier_2);
        pushButton_modifier_abris->setObjectName(QString::fromUtf8("pushButton_modifier_abris"));
        pushButton_modifier_abris->setGeometry(QRect(220, 260, 75, 23));
        pushButton_modifier_abris->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        widget2 = new QWidget(Modifier_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(190, 30, 141, 201));
        verticalLayout_10 = new QVBoxLayout(widget2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        lineEdit_id_conges_2 = new QLineEdit(widget2);
        lineEdit_id_conges_2->setObjectName(QString::fromUtf8("lineEdit_id_conges_2"));

        verticalLayout_10->addWidget(lineEdit_id_conges_2);

        lineEdit_Date_depart_2 = new QLineEdit(widget2);
        lineEdit_Date_depart_2->setObjectName(QString::fromUtf8("lineEdit_Date_depart_2"));

        verticalLayout_10->addWidget(lineEdit_Date_depart_2);

        lineEdit_Date_retour_2 = new QLineEdit(widget2);
        lineEdit_Date_retour_2->setObjectName(QString::fromUtf8("lineEdit_Date_retour_2"));

        verticalLayout_10->addWidget(lineEdit_Date_retour_2);

        widget3 = new QWidget(Modifier_2);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(70, 30, 111, 201));
        verticalLayout_12 = new QVBoxLayout(widget3);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_id_ta_2 = new QLabel(widget3);
        label_id_ta_2->setObjectName(QString::fromUtf8("label_id_ta_2"));
        label_id_ta_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_12->addWidget(label_id_ta_2);

        label_nom_ta_2 = new QLabel(widget3);
        label_nom_ta_2->setObjectName(QString::fromUtf8("label_nom_ta_2"));
        label_nom_ta_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_12->addWidget(label_nom_ta_2);

        label_qte_ta_2 = new QLabel(widget3);
        label_qte_ta_2->setObjectName(QString::fromUtf8("label_qte_ta_2"));

        verticalLayout_12->addWidget(label_qte_ta_2);

        tabWidget_2->addTab(Modifier_2, QString());
        Supprimer_2 = new QWidget();
        Supprimer_2->setObjectName(QString::fromUtf8("Supprimer_2"));
        lineEdit_id_supp_abris = new QLineEdit(Supprimer_2);
        lineEdit_id_supp_abris->setObjectName(QString::fromUtf8("lineEdit_id_supp_abris"));
        lineEdit_id_supp_abris->setGeometry(QRect(130, 50, 131, 31));
        label_id_2 = new QLabel(Supprimer_2);
        label_id_2->setObjectName(QString::fromUtf8("label_id_2"));
        label_id_2->setGeometry(QRect(80, 61, 47, 14));
        pushButton_sup_abris = new QPushButton(Supprimer_2);
        pushButton_sup_abris->setObjectName(QString::fromUtf8("pushButton_sup_abris"));
        pushButton_sup_abris->setGeometry(QRect(170, 191, 75, 23));
        pushButton_sup_abris->setStyleSheet(QString::fromUtf8("color: white;\n"
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
        lineEdit_abris_cong = new QLineEdit(Rechercher_2);
        lineEdit_abris_cong->setObjectName(QString::fromUtf8("lineEdit_abris_cong"));
        lineEdit_abris_cong->setGeometry(QRect(432, 9, 121, 21));
        label_4 = new QLabel(Rechercher_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 10, 111, 20));
        tab_abris_rech = new QTableView(Rechercher_2);
        tab_abris_rech->setObjectName(QString::fromUtf8("tab_abris_rech"));
        tab_abris_rech->setGeometry(QRect(30, 30, 591, 291));
        tab_abris_rech->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
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

        retranslateUi(G_animaux);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(G_animaux);
    } // setupUi

    void retranslateUi(QWidget *G_animaux)
    {
        G_animaux->setWindowTitle(QCoreApplication::translate("G_animaux", "Form", nullptr));
        label->setText(QCoreApplication::translate("G_animaux", "Animaux", nullptr));
        pushButton_home->setText(QCoreApplication::translate("G_animaux", "Accueil", nullptr));
        pushButton_ouvriers->setText(QCoreApplication::translate("G_animaux", "Ouvriers", nullptr));
        pushButton_animaux->setText(QCoreApplication::translate("G_animaux", "Animaux", nullptr));
        pushButton_nouritures->setText(QCoreApplication::translate("G_animaux", "Nourritures", nullptr));
        pushButton->setText(QCoreApplication::translate("G_animaux", "Materiels", nullptr));
        pushButton_commandes->setText(QCoreApplication::translate("G_animaux", "Commandes", nullptr));
        pushButton_productions->setText(QCoreApplication::translate("G_animaux", "Productions", nullptr));
        pushButton_ani->setText(QCoreApplication::translate("G_animaux", "Gestiion Animaux", nullptr));
        pushButton_abris->setText(QCoreApplication::translate("G_animaux", "Gestion Abris", nullptr));
        label_3->setText(QCoreApplication::translate("G_animaux", "Gestion Animaux", nullptr));
        pushButton_trier_ani->setText(QCoreApplication::translate("G_animaux", "Trier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Affichage), QCoreApplication::translate("G_animaux", "Affichage", nullptr));
        pushButton_ajouter_ouv->setText(QCoreApplication::translate("G_animaux", "Ajouter", nullptr));
        label_id_ta_6->setText(QCoreApplication::translate("G_animaux", "Id", nullptr));
        label_nom->setText(QCoreApplication::translate("G_animaux", "Type", nullptr));
        label_prenom->setText(QCoreApplication::translate("G_animaux", "Qualit\303\251", nullptr));
        label_pwd->setText(QCoreApplication::translate("G_animaux", "Prix", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Ajouter), QCoreApplication::translate("G_animaux", "Ajouter", nullptr));
        pushButton_modifier_ani->setText(QCoreApplication::translate("G_animaux", "Modifier", nullptr));
        label_id_ta_9->setText(QCoreApplication::translate("G_animaux", "Id", nullptr));
        label_nom_3->setText(QCoreApplication::translate("G_animaux", "Type", nullptr));
        label_prenom_3->setText(QCoreApplication::translate("G_animaux", "Qualit\303\251", nullptr));
        label_pwd_3->setText(QCoreApplication::translate("G_animaux", "Prix", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Modifier), QCoreApplication::translate("G_animaux", "Modifier", nullptr));
        label_id_ts->setText(QCoreApplication::translate("G_animaux", "ID", nullptr));
        pushButton_sup_ani->setText(QCoreApplication::translate("G_animaux", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Supprimer), QCoreApplication::translate("G_animaux", "Supprimer", nullptr));
        label_5->setText(QCoreApplication::translate("G_animaux", "Nom \303\240 rechercher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Rechercher), QCoreApplication::translate("G_animaux", "Rechercher", nullptr));
        pushButton_retour->setText(QCoreApplication::translate("G_animaux", "Retour", nullptr));
        label_2->setText(QCoreApplication::translate("G_animaux", "Gestion Abris", nullptr));
        pushButton_trier_abris->setText(QCoreApplication::translate("G_animaux", "Trier", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Affichage_2), QCoreApplication::translate("G_animaux", "Affichage", nullptr));
        pushButton_ajouter_abris->setText(QCoreApplication::translate("G_animaux", "Ajouter", nullptr));
        label_id_ta->setText(QCoreApplication::translate("G_animaux", "Id", nullptr));
        label_nom_ta->setText(QCoreApplication::translate("G_animaux", "Etat", nullptr));
        label_qte_ta->setText(QCoreApplication::translate("G_animaux", "Type", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Ajouter_2), QCoreApplication::translate("G_animaux", "Ajouter", nullptr));
        pushButton_modifier_abris->setText(QCoreApplication::translate("G_animaux", "Modifier", nullptr));
        label_id_ta_2->setText(QCoreApplication::translate("G_animaux", "Id", nullptr));
        label_nom_ta_2->setText(QCoreApplication::translate("G_animaux", "Etat", nullptr));
        label_qte_ta_2->setText(QCoreApplication::translate("G_animaux", "Type", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Modifier_2), QCoreApplication::translate("G_animaux", "Modifier", nullptr));
        label_id_2->setText(QCoreApplication::translate("G_animaux", "ID", nullptr));
        pushButton_sup_abris->setText(QCoreApplication::translate("G_animaux", "Supprimer", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Supprimer_2), QCoreApplication::translate("G_animaux", "Supprimer", nullptr));
        label_4->setText(QCoreApplication::translate("G_animaux", "Nom \303\240 rechercher", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Rechercher_2), QCoreApplication::translate("G_animaux", "Rechercher", nullptr));
        pushButton_retour_2->setText(QCoreApplication::translate("G_animaux", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class G_animaux: public Ui_G_animaux {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_G_ANIMAUX_H
