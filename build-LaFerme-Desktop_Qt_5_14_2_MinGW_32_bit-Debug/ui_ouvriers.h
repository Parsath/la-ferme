/********************************************************************************
** Form generated from reading UI file 'ouvriers.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUVRIERS_H
#define UI_OUVRIERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
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

class Ui_ouvriers
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
    QPushButton *pushButton_Gouvriers;
    QPushButton *pushButton_Gconges;
    QWidget *page_3;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *Affichage;
    QPushButton *pushButton_trier_ouv;
    QTableView *tab_ouv;
    QWidget *Ajouter;
    QPushButton *pushButton_ajouter_ouv;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_id_ta_6;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLabel *label_pwd;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_id_ouv;
    QLineEdit *lineEdit_nom_ouv;
    QLineEdit *lineEdit_prenom_ouv;
    QLineEdit *lineEdit_pwd_ouv;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_rue;
    QLabel *label_codepostal;
    QLabel *label_contact;
    QLabel *label_ville;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_rue;
    QLineEdit *lineEdit_code_postal;
    QLineEdit *lineEdit_contact;
    QLineEdit *lineEdit_ville;
    QWidget *Modifier;
    QPushButton *pushButton_modifier_ouv;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEdit_rue_mod;
    QLineEdit *lineEdit_code_postal_mod;
    QLineEdit *lineEdit_contact_mod;
    QLineEdit *lineEdit_ville_mod;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *lineEdit_id_ouv_mod;
    QLineEdit *lineEdit_nom_ouv_mod;
    QLineEdit *lineEdit_prenom_ouv_mod;
    QLineEdit *lineEdit_pwd_ouv_mod;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_id_ta_7;
    QLabel *label_nom_2;
    QLabel *label_prenom_2;
    QLabel *label_pwd_2;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_contact_2;
    QLabel *label_codepostal_2;
    QLabel *label_rue_2;
    QLabel *label_ville_2;
    QWidget *Supprimer;
    QLabel *label_id_ts;
    QLineEdit *lineEdit_id_ouv_2;
    QPushButton *pushButton_sup_ouv;
    QWidget *Rechercher;
    QLabel *label_5;
    QLineEdit *lineEdit_recherche_ouv;
    QTableView *tab_ouv_rech;
    QPushButton *pushButton_retour;
    QWidget *page_2;
    QLabel *label_2;
    QTabWidget *tabWidget_2;
    QWidget *Affichage_2;
    QPushButton *pushButton_trier_cong;
    QTableView *tab_conges;
    QWidget *Ajouter_2;
    QPushButton *pushButton_ajouter_cong;
    QLabel *label_id_ta_2;
    QLabel *label_id_ta_3;
    QLabel *label_qte_ta;
    QLineEdit *lineEdit_id_cong_ouv;
    QLabel *label_nom_ta;
    QLineEdit *lineEdit_Date_depart;
    QLineEdit *lineEdit_solde_conge;
    QLabel *label_id_ta;
    QLineEdit *lineEdit_Date_retour;
    QLineEdit *lineEdit_id_conges;
    QLabel *label_date_ta;
    QLineEdit *lineEdit_admin;
    QWidget *Modifier_2;
    QPushButton *pushButton_modifier_cong;
    QLabel *label_id_ta_4;
    QLabel *label_id_ta_5;
    QLabel *label_qte_ta_2;
    QLabel *label_nom_ta_2;
    QLineEdit *lineEdit_id_cong_ouv_mod;
    QLabel *label_id_ta_8;
    QLineEdit *lineEdit_Date_depart_mod;
    QLineEdit *lineEdit_solde_conge_mod;
    QLineEdit *lineEdit_id_conges_mod;
    QLineEdit *lineEdit_Date_retour_mod;
    QLabel *label_date_ta_2;
    QLineEdit *lineEdit_admin_mod;
    QWidget *Supprimer_2;
    QLineEdit *lineEdit_id_supp_cong;
    QLabel *label_id_2;
    QPushButton *pushButton_sup_cong;
    QWidget *Rechercher_2;
    QLineEdit *lineEdit_rech_cong;
    QLabel *label_4;
    QTableView *tab_conge_rech;
    QPushButton *pushButton_retour_2;

    void setupUi(QWidget *ouvriers)
    {
        if (ouvriers->objectName().isEmpty())
            ouvriers->setObjectName(QString::fromUtf8("ouvriers"));
        ouvriers->resize(800, 500);
        ouvriers->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
""));
        stackedWidget = new QStackedWidget(ouvriers);
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
        layoutWidget_2->setGeometry(QRect(170, 60, 109, 54));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Gouvriers = new QPushButton(layoutWidget_2);
        pushButton_Gouvriers->setObjectName(QString::fromUtf8("pushButton_Gouvriers"));
        pushButton_Gouvriers->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 12px;"));

        verticalLayout_2->addWidget(pushButton_Gouvriers);

        pushButton_Gconges = new QPushButton(layoutWidget_2);
        pushButton_Gconges->setObjectName(QString::fromUtf8("pushButton_Gconges"));
        pushButton_Gconges->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 12px;"));

        verticalLayout_2->addWidget(pushButton_Gconges);

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
        pushButton_trier_ouv = new QPushButton(Affichage);
        pushButton_trier_ouv->setObjectName(QString::fromUtf8("pushButton_trier_ouv"));
        pushButton_trier_ouv->setGeometry(QRect(510, 10, 75, 23));
        pushButton_trier_ouv->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        tab_ouv = new QTableView(Affichage);
        tab_ouv->setObjectName(QString::fromUtf8("tab_ouv"));
        tab_ouv->setGeometry(QRect(30, 40, 591, 291));
        tab_ouv->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
"border-radius: 40px;\n"
"background: white;"));
        tabWidget->addTab(Affichage, QString());
        Ajouter = new QWidget();
        Ajouter->setObjectName(QString::fromUtf8("Ajouter"));
        pushButton_ajouter_ouv = new QPushButton(Ajouter);
        pushButton_ajouter_ouv->setObjectName(QString::fromUtf8("pushButton_ajouter_ouv"));
        pushButton_ajouter_ouv->setGeometry(QRect(290, 290, 75, 23));
        pushButton_ajouter_ouv->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        layoutWidget1 = new QWidget(Ajouter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 81, 211));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_id_ta_6 = new QLabel(layoutWidget1);
        label_id_ta_6->setObjectName(QString::fromUtf8("label_id_ta_6"));
        label_id_ta_6->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(label_id_ta_6);

        label_nom = new QLabel(layoutWidget1);
        label_nom->setObjectName(QString::fromUtf8("label_nom"));
        label_nom->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(label_nom);

        label_prenom = new QLabel(layoutWidget1);
        label_prenom->setObjectName(QString::fromUtf8("label_prenom"));

        verticalLayout_3->addWidget(label_prenom);

        label_pwd = new QLabel(layoutWidget1);
        label_pwd->setObjectName(QString::fromUtf8("label_pwd"));

        verticalLayout_3->addWidget(label_pwd);

        layoutWidget2 = new QWidget(Ajouter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 30, 171, 211));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_id_ouv = new QLineEdit(layoutWidget2);
        lineEdit_id_ouv->setObjectName(QString::fromUtf8("lineEdit_id_ouv"));

        verticalLayout_4->addWidget(lineEdit_id_ouv);

        lineEdit_nom_ouv = new QLineEdit(layoutWidget2);
        lineEdit_nom_ouv->setObjectName(QString::fromUtf8("lineEdit_nom_ouv"));

        verticalLayout_4->addWidget(lineEdit_nom_ouv);

        lineEdit_prenom_ouv = new QLineEdit(layoutWidget2);
        lineEdit_prenom_ouv->setObjectName(QString::fromUtf8("lineEdit_prenom_ouv"));

        verticalLayout_4->addWidget(lineEdit_prenom_ouv);

        lineEdit_pwd_ouv = new QLineEdit(layoutWidget2);
        lineEdit_pwd_ouv->setObjectName(QString::fromUtf8("lineEdit_pwd_ouv"));

        verticalLayout_4->addWidget(lineEdit_pwd_ouv);

        layoutWidget3 = new QWidget(Ajouter);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(380, 30, 261, 221));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_rue = new QLabel(layoutWidget3);
        label_rue->setObjectName(QString::fromUtf8("label_rue"));
        label_rue->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_6->addWidget(label_rue);

        label_codepostal = new QLabel(layoutWidget3);
        label_codepostal->setObjectName(QString::fromUtf8("label_codepostal"));
        label_codepostal->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_6->addWidget(label_codepostal);

        label_contact = new QLabel(layoutWidget3);
        label_contact->setObjectName(QString::fromUtf8("label_contact"));
        label_contact->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_6->addWidget(label_contact);

        label_ville = new QLabel(layoutWidget3);
        label_ville->setObjectName(QString::fromUtf8("label_ville"));
        label_ville->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_6->addWidget(label_ville);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lineEdit_rue = new QLineEdit(layoutWidget3);
        lineEdit_rue->setObjectName(QString::fromUtf8("lineEdit_rue"));

        verticalLayout_5->addWidget(lineEdit_rue);

        lineEdit_code_postal = new QLineEdit(layoutWidget3);
        lineEdit_code_postal->setObjectName(QString::fromUtf8("lineEdit_code_postal"));

        verticalLayout_5->addWidget(lineEdit_code_postal);

        lineEdit_contact = new QLineEdit(layoutWidget3);
        lineEdit_contact->setObjectName(QString::fromUtf8("lineEdit_contact"));

        verticalLayout_5->addWidget(lineEdit_contact);

        lineEdit_ville = new QLineEdit(layoutWidget3);
        lineEdit_ville->setObjectName(QString::fromUtf8("lineEdit_ville"));

        verticalLayout_5->addWidget(lineEdit_ville);


        horizontalLayout->addLayout(verticalLayout_5);

        tabWidget->addTab(Ajouter, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QString::fromUtf8("Modifier"));
        pushButton_modifier_ouv = new QPushButton(Modifier);
        pushButton_modifier_ouv->setObjectName(QString::fromUtf8("pushButton_modifier_ouv"));
        pushButton_modifier_ouv->setGeometry(QRect(290, 290, 75, 23));
        pushButton_modifier_ouv->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        layoutWidget_4 = new QWidget(Modifier);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(120, 30, 194, 219));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        lineEdit_rue_mod = new QLineEdit(layoutWidget_4);
        lineEdit_rue_mod->setObjectName(QString::fromUtf8("lineEdit_rue_mod"));

        verticalLayout_8->addWidget(lineEdit_rue_mod);

        lineEdit_code_postal_mod = new QLineEdit(layoutWidget_4);
        lineEdit_code_postal_mod->setObjectName(QString::fromUtf8("lineEdit_code_postal_mod"));

        verticalLayout_8->addWidget(lineEdit_code_postal_mod);

        lineEdit_contact_mod = new QLineEdit(layoutWidget_4);
        lineEdit_contact_mod->setObjectName(QString::fromUtf8("lineEdit_contact_mod"));

        verticalLayout_8->addWidget(lineEdit_contact_mod);

        lineEdit_ville_mod = new QLineEdit(layoutWidget_4);
        lineEdit_ville_mod->setObjectName(QString::fromUtf8("lineEdit_ville_mod"));

        verticalLayout_8->addWidget(lineEdit_ville_mod);

        layoutWidget_5 = new QWidget(Modifier);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(480, 30, 171, 211));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        lineEdit_id_ouv_mod = new QLineEdit(layoutWidget_5);
        lineEdit_id_ouv_mod->setObjectName(QString::fromUtf8("lineEdit_id_ouv_mod"));

        verticalLayout_9->addWidget(lineEdit_id_ouv_mod);

        lineEdit_nom_ouv_mod = new QLineEdit(layoutWidget_5);
        lineEdit_nom_ouv_mod->setObjectName(QString::fromUtf8("lineEdit_nom_ouv_mod"));

        verticalLayout_9->addWidget(lineEdit_nom_ouv_mod);

        lineEdit_prenom_ouv_mod = new QLineEdit(layoutWidget_5);
        lineEdit_prenom_ouv_mod->setObjectName(QString::fromUtf8("lineEdit_prenom_ouv_mod"));

        verticalLayout_9->addWidget(lineEdit_prenom_ouv_mod);

        lineEdit_pwd_ouv_mod = new QLineEdit(layoutWidget_5);
        lineEdit_pwd_ouv_mod->setObjectName(QString::fromUtf8("lineEdit_pwd_ouv_mod"));

        verticalLayout_9->addWidget(lineEdit_pwd_ouv_mod);

        layoutWidget_3 = new QWidget(Modifier);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 30, 81, 211));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_id_ta_7 = new QLabel(layoutWidget_3);
        label_id_ta_7->setObjectName(QString::fromUtf8("label_id_ta_7"));
        label_id_ta_7->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_7->addWidget(label_id_ta_7);

        label_nom_2 = new QLabel(layoutWidget_3);
        label_nom_2->setObjectName(QString::fromUtf8("label_nom_2"));
        label_nom_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_7->addWidget(label_nom_2);

        label_prenom_2 = new QLabel(layoutWidget_3);
        label_prenom_2->setObjectName(QString::fromUtf8("label_prenom_2"));

        verticalLayout_7->addWidget(label_prenom_2);

        label_pwd_2 = new QLabel(layoutWidget_3);
        label_pwd_2->setObjectName(QString::fromUtf8("label_pwd_2"));

        verticalLayout_7->addWidget(label_pwd_2);

        layoutWidget4 = new QWidget(Modifier);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(340, 29, 131, 211));
        verticalLayout_10 = new QVBoxLayout(layoutWidget4);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_contact_2 = new QLabel(layoutWidget4);
        label_contact_2->setObjectName(QString::fromUtf8("label_contact_2"));
        label_contact_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_10->addWidget(label_contact_2);

        label_codepostal_2 = new QLabel(layoutWidget4);
        label_codepostal_2->setObjectName(QString::fromUtf8("label_codepostal_2"));
        label_codepostal_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_10->addWidget(label_codepostal_2);

        label_rue_2 = new QLabel(layoutWidget4);
        label_rue_2->setObjectName(QString::fromUtf8("label_rue_2"));
        label_rue_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_10->addWidget(label_rue_2);

        label_ville_2 = new QLabel(layoutWidget4);
        label_ville_2->setObjectName(QString::fromUtf8("label_ville_2"));
        label_ville_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_10->addWidget(label_ville_2);

        tabWidget->addTab(Modifier, QString());
        Supprimer = new QWidget();
        Supprimer->setObjectName(QString::fromUtf8("Supprimer"));
        label_id_ts = new QLabel(Supprimer);
        label_id_ts->setObjectName(QString::fromUtf8("label_id_ts"));
        label_id_ts->setGeometry(QRect(80, 60, 47, 14));
        lineEdit_id_ouv_2 = new QLineEdit(Supprimer);
        lineEdit_id_ouv_2->setObjectName(QString::fromUtf8("lineEdit_id_ouv_2"));
        lineEdit_id_ouv_2->setGeometry(QRect(130, 49, 131, 31));
        pushButton_sup_ouv = new QPushButton(Supprimer);
        pushButton_sup_ouv->setObjectName(QString::fromUtf8("pushButton_sup_ouv"));
        pushButton_sup_ouv->setGeometry(QRect(170, 190, 75, 23));
        pushButton_sup_ouv->setStyleSheet(QString::fromUtf8("color: white;\n"
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
        lineEdit_recherche_ouv = new QLineEdit(Rechercher);
        lineEdit_recherche_ouv->setObjectName(QString::fromUtf8("lineEdit_recherche_ouv"));
        lineEdit_recherche_ouv->setGeometry(QRect(422, 9, 121, 21));
        tab_ouv_rech = new QTableView(Rechercher);
        tab_ouv_rech->setObjectName(QString::fromUtf8("tab_ouv_rech"));
        tab_ouv_rech->setGeometry(QRect(30, 40, 591, 291));
        tab_ouv_rech->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
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
        pushButton_trier_cong = new QPushButton(Affichage_2);
        pushButton_trier_cong->setObjectName(QString::fromUtf8("pushButton_trier_cong"));
        pushButton_trier_cong->setGeometry(QRect(490, 10, 75, 23));
        pushButton_trier_cong->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        tab_conges = new QTableView(Affichage_2);
        tab_conges->setObjectName(QString::fromUtf8("tab_conges"));
        tab_conges->setGeometry(QRect(30, 30, 591, 291));
        tab_conges->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
"border-radius: 40px;\n"
"background: white;"));
        tabWidget_2->addTab(Affichage_2, QString());
        Ajouter_2 = new QWidget();
        Ajouter_2->setObjectName(QString::fromUtf8("Ajouter_2"));
        Ajouter_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_ajouter_cong = new QPushButton(Ajouter_2);
        pushButton_ajouter_cong->setObjectName(QString::fromUtf8("pushButton_ajouter_cong"));
        pushButton_ajouter_cong->setGeometry(QRect(470, 270, 75, 23));
        pushButton_ajouter_cong->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,stop: 0 white, stop: 0.4 gray,stop: 1 green);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        label_id_ta_2 = new QLabel(Ajouter_2);
        label_id_ta_2->setObjectName(QString::fromUtf8("label_id_ta_2"));
        label_id_ta_2->setGeometry(QRect(90, 200, 47, 14));
        label_id_ta_2->setStyleSheet(QString::fromUtf8(""));
        label_id_ta_3 = new QLabel(Ajouter_2);
        label_id_ta_3->setObjectName(QString::fromUtf8("label_id_ta_3"));
        label_id_ta_3->setGeometry(QRect(90, 240, 47, 14));
        label_id_ta_3->setStyleSheet(QString::fromUtf8(""));
        label_qte_ta = new QLabel(Ajouter_2);
        label_qte_ta->setObjectName(QString::fromUtf8("label_qte_ta"));
        label_qte_ta->setGeometry(QRect(80, 120, 61, 20));
        lineEdit_id_cong_ouv = new QLineEdit(Ajouter_2);
        lineEdit_id_cong_ouv->setObjectName(QString::fromUtf8("lineEdit_id_cong_ouv"));
        lineEdit_id_cong_ouv->setGeometry(QRect(190, 200, 113, 20));
        label_nom_ta = new QLabel(Ajouter_2);
        label_nom_ta->setObjectName(QString::fromUtf8("label_nom_ta"));
        label_nom_ta->setGeometry(QRect(76, 80, 71, 20));
        label_nom_ta->setStyleSheet(QString::fromUtf8(""));
        lineEdit_Date_depart = new QLineEdit(Ajouter_2);
        lineEdit_Date_depart->setObjectName(QString::fromUtf8("lineEdit_Date_depart"));
        lineEdit_Date_depart->setGeometry(QRect(190, 80, 113, 20));
        lineEdit_solde_conge = new QLineEdit(Ajouter_2);
        lineEdit_solde_conge->setObjectName(QString::fromUtf8("lineEdit_solde_conge"));
        lineEdit_solde_conge->setGeometry(QRect(190, 160, 113, 20));
        label_id_ta = new QLabel(Ajouter_2);
        label_id_ta->setObjectName(QString::fromUtf8("label_id_ta"));
        label_id_ta->setGeometry(QRect(100, 40, 47, 14));
        label_id_ta->setStyleSheet(QString::fromUtf8(""));
        lineEdit_Date_retour = new QLineEdit(Ajouter_2);
        lineEdit_Date_retour->setObjectName(QString::fromUtf8("lineEdit_Date_retour"));
        lineEdit_Date_retour->setGeometry(QRect(190, 120, 113, 20));
        lineEdit_id_conges = new QLineEdit(Ajouter_2);
        lineEdit_id_conges->setObjectName(QString::fromUtf8("lineEdit_id_conges"));
        lineEdit_id_conges->setGeometry(QRect(190, 40, 113, 20));
        label_date_ta = new QLabel(Ajouter_2);
        label_date_ta->setObjectName(QString::fromUtf8("label_date_ta"));
        label_date_ta->setGeometry(QRect(86, 160, 61, 20));
        lineEdit_admin = new QLineEdit(Ajouter_2);
        lineEdit_admin->setObjectName(QString::fromUtf8("lineEdit_admin"));
        lineEdit_admin->setGeometry(QRect(190, 240, 113, 20));
        tabWidget_2->addTab(Ajouter_2, QString());
        Modifier_2 = new QWidget();
        Modifier_2->setObjectName(QString::fromUtf8("Modifier_2"));
        pushButton_modifier_cong = new QPushButton(Modifier_2);
        pushButton_modifier_cong->setObjectName(QString::fromUtf8("pushButton_modifier_cong"));
        pushButton_modifier_cong->setGeometry(QRect(360, 270, 75, 23));
        pushButton_modifier_cong->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;"));
        label_id_ta_4 = new QLabel(Modifier_2);
        label_id_ta_4->setObjectName(QString::fromUtf8("label_id_ta_4"));
        label_id_ta_4->setGeometry(QRect(60, 190, 47, 14));
        label_id_ta_4->setStyleSheet(QString::fromUtf8(""));
        label_id_ta_5 = new QLabel(Modifier_2);
        label_id_ta_5->setObjectName(QString::fromUtf8("label_id_ta_5"));
        label_id_ta_5->setGeometry(QRect(60, 230, 47, 14));
        label_id_ta_5->setStyleSheet(QString::fromUtf8(""));
        label_qte_ta_2 = new QLabel(Modifier_2);
        label_qte_ta_2->setObjectName(QString::fromUtf8("label_qte_ta_2"));
        label_qte_ta_2->setGeometry(QRect(50, 110, 61, 20));
        label_nom_ta_2 = new QLabel(Modifier_2);
        label_nom_ta_2->setObjectName(QString::fromUtf8("label_nom_ta_2"));
        label_nom_ta_2->setGeometry(QRect(46, 70, 71, 20));
        label_nom_ta_2->setStyleSheet(QString::fromUtf8(""));
        lineEdit_id_cong_ouv_mod = new QLineEdit(Modifier_2);
        lineEdit_id_cong_ouv_mod->setObjectName(QString::fromUtf8("lineEdit_id_cong_ouv_mod"));
        lineEdit_id_cong_ouv_mod->setGeometry(QRect(160, 190, 113, 20));
        label_id_ta_8 = new QLabel(Modifier_2);
        label_id_ta_8->setObjectName(QString::fromUtf8("label_id_ta_8"));
        label_id_ta_8->setGeometry(QRect(70, 30, 47, 14));
        label_id_ta_8->setStyleSheet(QString::fromUtf8(""));
        lineEdit_Date_depart_mod = new QLineEdit(Modifier_2);
        lineEdit_Date_depart_mod->setObjectName(QString::fromUtf8("lineEdit_Date_depart_mod"));
        lineEdit_Date_depart_mod->setGeometry(QRect(160, 70, 113, 20));
        lineEdit_solde_conge_mod = new QLineEdit(Modifier_2);
        lineEdit_solde_conge_mod->setObjectName(QString::fromUtf8("lineEdit_solde_conge_mod"));
        lineEdit_solde_conge_mod->setGeometry(QRect(160, 150, 113, 20));
        lineEdit_id_conges_mod = new QLineEdit(Modifier_2);
        lineEdit_id_conges_mod->setObjectName(QString::fromUtf8("lineEdit_id_conges_mod"));
        lineEdit_id_conges_mod->setGeometry(QRect(160, 30, 113, 20));
        lineEdit_Date_retour_mod = new QLineEdit(Modifier_2);
        lineEdit_Date_retour_mod->setObjectName(QString::fromUtf8("lineEdit_Date_retour_mod"));
        lineEdit_Date_retour_mod->setGeometry(QRect(160, 110, 113, 20));
        label_date_ta_2 = new QLabel(Modifier_2);
        label_date_ta_2->setObjectName(QString::fromUtf8("label_date_ta_2"));
        label_date_ta_2->setGeometry(QRect(56, 150, 61, 20));
        lineEdit_admin_mod = new QLineEdit(Modifier_2);
        lineEdit_admin_mod->setObjectName(QString::fromUtf8("lineEdit_admin_mod"));
        lineEdit_admin_mod->setGeometry(QRect(160, 230, 113, 20));
        tabWidget_2->addTab(Modifier_2, QString());
        Supprimer_2 = new QWidget();
        Supprimer_2->setObjectName(QString::fromUtf8("Supprimer_2"));
        lineEdit_id_supp_cong = new QLineEdit(Supprimer_2);
        lineEdit_id_supp_cong->setObjectName(QString::fromUtf8("lineEdit_id_supp_cong"));
        lineEdit_id_supp_cong->setGeometry(QRect(130, 50, 131, 31));
        label_id_2 = new QLabel(Supprimer_2);
        label_id_2->setObjectName(QString::fromUtf8("label_id_2"));
        label_id_2->setGeometry(QRect(80, 61, 47, 14));
        pushButton_sup_cong = new QPushButton(Supprimer_2);
        pushButton_sup_cong->setObjectName(QString::fromUtf8("pushButton_sup_cong"));
        pushButton_sup_cong->setGeometry(QRect(170, 191, 75, 23));
        pushButton_sup_cong->setStyleSheet(QString::fromUtf8("color: white;\n"
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
        lineEdit_rech_cong = new QLineEdit(Rechercher_2);
        lineEdit_rech_cong->setObjectName(QString::fromUtf8("lineEdit_rech_cong"));
        lineEdit_rech_cong->setGeometry(QRect(432, 9, 121, 21));
        label_4 = new QLabel(Rechercher_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 10, 111, 20));
        tab_conge_rech = new QTableView(Rechercher_2);
        tab_conge_rech->setObjectName(QString::fromUtf8("tab_conge_rech"));
        tab_conge_rech->setGeometry(QRect(30, 30, 591, 291));
        tab_conge_rech->setStyleSheet(QString::fromUtf8("border: 3px solid gray;\n"
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

        retranslateUi(ouvriers);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(4);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ouvriers);
    } // setupUi

    void retranslateUi(QWidget *ouvriers)
    {
        ouvriers->setWindowTitle(QCoreApplication::translate("ouvriers", "Form", nullptr));
        label->setText(QCoreApplication::translate("ouvriers", "Ouvriers", nullptr));
        pushButton_home->setText(QCoreApplication::translate("ouvriers", "Accueil", nullptr));
        pushButton_ouvriers->setText(QCoreApplication::translate("ouvriers", "Ouvriers", nullptr));
        pushButton_animaux->setText(QCoreApplication::translate("ouvriers", "Animaux", nullptr));
        pushButton_nouritures->setText(QCoreApplication::translate("ouvriers", "Nourritures", nullptr));
        pushButton->setText(QCoreApplication::translate("ouvriers", "Materiels", nullptr));
        pushButton_commandes->setText(QCoreApplication::translate("ouvriers", "Commandes", nullptr));
        pushButton_productions->setText(QCoreApplication::translate("ouvriers", "Productions", nullptr));
        pushButton_Gouvriers->setText(QCoreApplication::translate("ouvriers", "Gestion Ouvriers", nullptr));
        pushButton_Gconges->setText(QCoreApplication::translate("ouvriers", "Gestion Cong\303\250s", nullptr));
        label_3->setText(QCoreApplication::translate("ouvriers", "Gestions Ouvriers", nullptr));
        pushButton_trier_ouv->setText(QCoreApplication::translate("ouvriers", "Trier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Affichage), QCoreApplication::translate("ouvriers", "Affichage", nullptr));
        pushButton_ajouter_ouv->setText(QCoreApplication::translate("ouvriers", "Ajouter", nullptr));
        label_id_ta_6->setText(QCoreApplication::translate("ouvriers", "Id", nullptr));
        label_nom->setText(QCoreApplication::translate("ouvriers", "Nom", nullptr));
        label_prenom->setText(QCoreApplication::translate("ouvriers", "Prenom", nullptr));
        label_pwd->setText(QCoreApplication::translate("ouvriers", "Mot de passe", nullptr));
        label_rue->setText(QCoreApplication::translate("ouvriers", "Rue", nullptr));
        label_codepostal->setText(QCoreApplication::translate("ouvriers", "Code postal", nullptr));
        label_contact->setText(QCoreApplication::translate("ouvriers", "Contact", nullptr));
        label_ville->setText(QCoreApplication::translate("ouvriers", "Ville", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Ajouter), QCoreApplication::translate("ouvriers", "Ajouter", nullptr));
        pushButton_modifier_ouv->setText(QCoreApplication::translate("ouvriers", "Modifier", nullptr));
        label_id_ta_7->setText(QCoreApplication::translate("ouvriers", "Id", nullptr));
        label_nom_2->setText(QCoreApplication::translate("ouvriers", "Nom", nullptr));
        label_prenom_2->setText(QCoreApplication::translate("ouvriers", "Prenom", nullptr));
        label_pwd_2->setText(QCoreApplication::translate("ouvriers", "Mot de passe", nullptr));
        label_contact_2->setText(QCoreApplication::translate("ouvriers", "Contact", nullptr));
        label_codepostal_2->setText(QCoreApplication::translate("ouvriers", "Code postal", nullptr));
        label_rue_2->setText(QCoreApplication::translate("ouvriers", "Rue", nullptr));
        label_ville_2->setText(QCoreApplication::translate("ouvriers", "Ville", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Modifier), QCoreApplication::translate("ouvriers", "Modifier", nullptr));
        label_id_ts->setText(QCoreApplication::translate("ouvriers", "ID", nullptr));
        pushButton_sup_ouv->setText(QCoreApplication::translate("ouvriers", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Supprimer), QCoreApplication::translate("ouvriers", "Supprimer", nullptr));
        label_5->setText(QCoreApplication::translate("ouvriers", "Nom \303\240 rechercher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Rechercher), QCoreApplication::translate("ouvriers", "Rechercher", nullptr));
        pushButton_retour->setText(QCoreApplication::translate("ouvriers", "Retour", nullptr));
        label_2->setText(QCoreApplication::translate("ouvriers", "Gestions Cong\303\250s", nullptr));
        pushButton_trier_cong->setText(QCoreApplication::translate("ouvriers", "Trier", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Affichage_2), QCoreApplication::translate("ouvriers", "Affichage", nullptr));
        pushButton_ajouter_cong->setText(QCoreApplication::translate("ouvriers", "Ajouter", nullptr));
        label_id_ta_2->setText(QCoreApplication::translate("ouvriers", "Id Ouvrier", nullptr));
        label_id_ta_3->setText(QCoreApplication::translate("ouvriers", "Id Admin", nullptr));
        label_qte_ta->setText(QCoreApplication::translate("ouvriers", "Date retour ", nullptr));
        label_nom_ta->setText(QCoreApplication::translate("ouvriers", "Date depart", nullptr));
        label_id_ta->setText(QCoreApplication::translate("ouvriers", "Id", nullptr));
        label_date_ta->setText(QCoreApplication::translate("ouvriers", "Solde Conges", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Ajouter_2), QCoreApplication::translate("ouvriers", "Ajouter", nullptr));
        pushButton_modifier_cong->setText(QCoreApplication::translate("ouvriers", "Modifier", nullptr));
        label_id_ta_4->setText(QCoreApplication::translate("ouvriers", "Id Ouvrier", nullptr));
        label_id_ta_5->setText(QCoreApplication::translate("ouvriers", "Id Admin", nullptr));
        label_qte_ta_2->setText(QCoreApplication::translate("ouvriers", "Date retour ", nullptr));
        label_nom_ta_2->setText(QCoreApplication::translate("ouvriers", "Date depart", nullptr));
        label_id_ta_8->setText(QCoreApplication::translate("ouvriers", "Id", nullptr));
        label_date_ta_2->setText(QCoreApplication::translate("ouvriers", "Solde Conges", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Modifier_2), QCoreApplication::translate("ouvriers", "Modifier", nullptr));
        label_id_2->setText(QCoreApplication::translate("ouvriers", "ID", nullptr));
        pushButton_sup_cong->setText(QCoreApplication::translate("ouvriers", "Supprimer", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Supprimer_2), QCoreApplication::translate("ouvriers", "Supprimer", nullptr));
        label_4->setText(QCoreApplication::translate("ouvriers", "Nom \303\240 rechercher", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Rechercher_2), QCoreApplication::translate("ouvriers", "Rechercher", nullptr));
        pushButton_retour_2->setText(QCoreApplication::translate("ouvriers", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ouvriers: public Ui_ouvriers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUVRIERS_H
