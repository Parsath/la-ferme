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
#include <QWidget>
#include <QRegExpValidator>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QDate>
#include <QTextStream>
#include <QTextDocument>


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

//ajouter un aliment
void MainWindow::on_butAjouter_clicked()
{

    int id = ui->spinBoxID->text().toInt();
    QString aliment = ui->lineEdit_aliment->text();
    QString animal = ui->lineEdit_2->text();
    QString type = ui->lineEdit_3type->text();
    double qt = ui->doubleSpinBoxQT->text().toInt();
    nourriture n(id,aliment,animal,type,qt);

    // controle de saisie

    if(nourriture::controle_id(id))
        {
            QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                        QObject::tr("ID existant !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

            ui->lineEdit_aliment->setText(0);
            ui->lineEdit_2->setText(0);
            ui->lineEdit_3type->setText(0);
            ui->doubleSpinBoxQT->setValue(0);
            ui->tabanimal->setModel(tmpnourriture.afficher());
            return;
        }
    else if(ui->spinBoxID->text().isEmpty() || ui->lineEdit_aliment->text().isEmpty() || ui->lineEdit_2->text().isEmpty() || ui->lineEdit_3type->text().isEmpty())
    {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                    QObject::tr("Veuillez remplir tous les champs.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tabanimal->setModel(tmpnourriture.afficher());
    }
    else
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
        }
}

//supprimer data
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

//modifier data
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

//afficher data
void MainWindow::on_Nourriture_Animal_tabBarClicked(int index)
{
    ui->tabanimal->setModel(tmpnourriture.afficher());
}

//liste des ID
void MainWindow::on_butOK_clicked()
{
    ui->comboBox->setModel(tmpnourriture.afficher_id());
}

//récupère data pour les modifier
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

//recherche par ID
void MainWindow::on_lineEditRecherche_textChanged(const QString &arg1)
{
    QSqlQuery query;
    QSqlQueryModel *model= new QSqlQueryModel;
    query.prepare("SELECT * FROM nourriture WHERE ID like :test ");
    query.bindValue(":test", arg1+"%");
    query.exec();
    model->setQuery(query);
    ui->tabanimal->setModel(model);
}

//trie par quantité
void MainWindow::on_commandLinkButtonQt_clicked()
{
    ui->tabanimal->setModel(tmpnourriture.trieQt());
}

//trie par id
void MainWindow::on_commandLinkButtonID_clicked()
{
   ui->tabanimal->setModel(tmpnourriture.trieId());
}

//afficher l'id s'il existe
void MainWindow::on_spinBoxID_valueChanged(const QString &arg1)
{
    QSqlQuery query;
    QSqlQueryModel *model= new QSqlQueryModel;
    query.prepare("SELECT * FROM nourriture WHERE ID like :test ");
    query.bindValue(":test", arg1+"%");
    query.exec();
    model->setQuery(query);
    ui->tabanimal->setModel(model);
}


//impression
void MainWindow::on_radioButton_clicked()
{
        QString strStream;
        QTextStream out(&strStream);

        const int rowCount = ui->tabanimal->model()->rowCount();
        const int columnCount = ui->tabanimal->model()->columnCount();
        QString TT = QDate::currentDate().toString("dd/MM/yyyy");
        out <<"<html>\n"
              "<head>\n"
               "<meta Content=\"Text/html; charset=Windows-1251\">\n"
            << "<title>Liste de la nourriture animale <title>\n "
            << "</head>\n"
            "<body bgcolor=#ffffff link=#5000A0>\n"
            "<h3 style=\"font-style:italic; color:black;\">"+TT+"<br><br></h3>"
            "<h1 style=\"text-align:center; font-style:italic; color:crimson;\"><strong> Liste de la nourriture animale <br><br> </strong></h1>"
            "<table style=\"text-align:center; font-size:20px; width:100%; border:2px dashed;\" border=1>\n "
              "</br> </br>";
        // headers
        out << "<thead><tr>";
        for (int column = 0; column < columnCount; column++)
            if (!ui->tabanimal->isColumnHidden(column))
                out << QString("<th>%1</th>").arg(ui->tabanimal->model()->headerData(column, Qt::Horizontal).toString());
        out << "</tr></thead>\n";

        // data table
        for (int row = 0; row < rowCount; row++) {
            out << "<tr>";
            for (int column = 0; column < columnCount; column++) {
                if (!ui->tabanimal->isColumnHidden(column)) {
                    QString data =ui->tabanimal->model()->data(ui->tabanimal->model()->index(row, column)).toString().simplified();
                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }
            }
            out << "</tr>\n";
        }
        out <<  "</table>\n"
            "</body>\n"
            "</html>\n";

        QTextDocument *document = new QTextDocument();
        document->setHtml(strStream);

        QPrinter printer;
        QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
        if (dialog->exec() == QDialog::Accepted) {
            document->print(&printer);
        }

        delete document;
}
