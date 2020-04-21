#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nourriture.h"
#include <QString>
#include <QMessageBox>
#include <QObject>
#include <QDoubleSpinBox>
#include <QAbstractItemModel>
#include <QAbstractButton>
#include <QIcon>
#include <QtSql/QSqlDatabase>
#include <QSqlQueryModel>
#include <QComboBox>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->butSupp->setIcon(QIcon("../icone/icons8-poubelle-24.png"));
    ui->butSupp->icon();
    ui->tabanimal->setModel(tmpnourriture.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_butAjouter_clicked()
{

    int id = ui->spinBoxID->text().toInt();
    QString aliment = ui->lineEdit_aliment->text();
    QString animal = ui->lineEdit_2->text();
    QString type = ui->lineEdit_3type->text();
    double qt = ui->doubleSpinBoxQT->text().toInt();
    nourriture n(id,aliment,animal,type,qt);
    bool test= n.ajouter();
    if (test)
    {
        ui->tabanimal->setModel(tmpnourriture.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter"),
                          QObject::tr("Aliment ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
        ui->spinBoxID->setValue(0);
        ui->lineEdit_aliment->setText(0);
        ui->lineEdit_2->setText(0);
        ui->lineEdit_3type->setText(0);
        ui->doubleSpinBoxQT->setValue(0);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }

    // controle de saisie

    /*bool contID= tmpnourriture.controle_id(id);
    if(contID == false)
        {
            QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                        QObject::tr("ID existant !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

            ui->lineEdit_aliment->setText(0);
            ui->lineEdit_2->setText(0);
            ui->lineEdit_3type->setText(0);
            ui->doubleSpinBoxQT->setValue(0);
        }
    else if (contID == true)
        {
            n.ajouter();
            ui->tabanimal->setModel(tmpnourriture.afficher());
            QMessageBox::information(nullptr, QObject::tr("Ajouter"),
                              QObject::tr("Aliment ajouté.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            ui->spinBoxID->setValue(0);
            ui->lineEdit_aliment->setText(0);
            ui->lineEdit_2->setText(0);
            ui->lineEdit_3type->setText(0);
            ui->doubleSpinBoxQT->setValue(0);
        }*/
}

void MainWindow::on_butSupp_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM nourriture");
    int id = ui->comboBox->currentText().toInt();
    bool test=tmpnourriture.supprimer(id);
    if(test)
    {
        ui->tabanimal->setModel(tmpnourriture.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un aliment"),
                          QObject::tr("Aliment supprimé.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

        ui->spinBoxID->setValue(0);
        ui->lineEdit_aliment->setText(0);
        ui->lineEdit_2->setText(0);
        ui->lineEdit_3type->setText(0);
        ui->doubleSpinBoxQT->setValue(0);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_butModifier_clicked()
{

    int id = ui->comboBox->currentText().toInt();
    QString aliment = ui->lineEdit_aliment->text();
    QString animal = ui->lineEdit_2->text();
    QString type = ui->lineEdit_3type->text();
    double qt = ui->doubleSpinBoxQT->text().toInt();
    nourriture n(id,aliment,animal,type,qt);
    bool test= n.modifier(id);
    if(test)
    {
        ui->tabanimal->setModel(tmpnourriture.afficher());
        QMessageBox::information(nullptr, QObject::tr("Modifier un aliment"),
                          QObject::tr("Aliment modifié.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

        ui->spinBoxID->setValue(0);
        ui->lineEdit_aliment->setText(0);
        ui->lineEdit_2->setText(0);
        ui->lineEdit_3type->setText(0);
        ui->doubleSpinBoxQT->setValue(0);

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Modifier"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_Nourriture_Animal_tabBarClicked(int index)
{
    ui->tabanimal->setModel(tmpnourriture.afficher());
}

void MainWindow::on_butOK_clicked()
{
    ui->comboBox->setModel(tmpnourriture.afficher_id());
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    int id = ui->comboBox->currentText().toInt();
    QString res= QString::number(id);
    QSqlQuery qry;
    qry.prepare("SELECT aliment, animal, type, qt FROM nourriture WHERE ID= :id");
    qry.bindValue(":id",res);
    if(qry.exec( ))
    {
        while (qry.next())
        {
            ui->lineEdit_aliment->setText(qry.value(0).toString());
            ui->lineEdit_2->setText(qry.value(1).toString());
            ui->lineEdit_3type->setText(qry.value(2).toString());
            ui->doubleSpinBoxQT->setValue(qry.value(3).toInt());
        }
    }
}


void MainWindow::on_lineEditRecherche_textChanged(const QString &arg1)
{
    QSqlQuery query;
    QSqlQueryModel *model= new QSqlQueryModel;
    query.prepare("SELECT * FROM nourriture WHERE ID like :test or ALIMENT like :test or ANIMAL like :test or TYPE like :test or QT like :test");
    query.bindValue(":test", arg1+"%");
    query.exec();
    model->setQuery(query);
    ui->tabanimal->setModel(model);
}

void MainWindow::on_commandLinkButtonQt_clicked()
{
    ui->tabanimal->setModel(tmpnourriture.trieQt());
}

void MainWindow::on_commandLinkButtonID_clicked()
{
   ui->tabanimal->setModel(tmpnourriture.trieId());
}
