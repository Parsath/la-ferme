#include "materiels.h"
#include "ui_materiels.h"
#include "materiels_e.h"
#include "materiels_a.h"

#include <QMessageBox>
#include <QRegExpValidator>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QDesktopServices>
#include <QUrl>


#define NOM "^[a-zA-Z '.-]*$"
#define ID "^[0-9]+$"
#define DATE "^(0[1-9]|[12][0-9]|3[01])[- /.](0[1-9]|1[012])[- /.](19|20)\\d\\d$"
#define ETAT "^[0-1]+$"


Materiels::Materiels(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Materiels)
{      
    ui->setupUi(this);
    Materiels::makePlot();

    ui->stackedWidget->setCurrentIndex(0);
    ui->tab_mat->setModel(tmp_mat.afficher_mat_e());
    ui->tab_mat_t->setModel(tmp_mat_t.afficher_mat_a());
    ui->comboBox->setModel(tmp_mat_t.afficher_mat_comboBox());
    ui->comboBox->setModel(tmp_mat.afficher_mat_comboBox());

    QRegExp rxEtat(ETAT), rxNom(NOM), rxId(ID), rxDate(DATE);
    QRegExpValidator * nom = new QRegExpValidator(rxNom,this);
    QRegExpValidator * id = new QRegExpValidator(rxId,this);
    QRegExpValidator * etat = new QRegExpValidator(rxEtat,this);
    QRegExpValidator * date = new QRegExpValidator(rxDate,this);


    ui->lineEdit_qte_ta->setValidator(etat);
    ui->lineEdit_id_ta->setValidator(id);
    ui->lineEdit_nom_ta->setValidator(nom);
    ui->lineEdit_date_ta->setValidator(date);

    ui->lineEdit_id->setValidator(id);
    ui->lineEdit_nom->setValidator(nom);
    ui->lineEdit_qte->setValidator(id);
    ui->lineEdit_date->setValidator(date);




}

Materiels::~Materiels()
{
    delete ui;
}

//Debut pushbutton de configuration ********
void Materiels::on_pushButton_home_clicked()
{
    emit HomeClicked();
}

void Materiels::on_pushButton_travail_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Materiels::on_pushButton_entretien_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Materiels::on_pushButton_retour_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Materiels::on_pushButton_retour_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
//fin pushbutton de configuration ********

        //***************************************************************************************************


//PushButton pour les cruds ***************
//*********************************************
//Materiels Entretien
        //Ajouter ***
//*********************************************
void Materiels::on_pushButton_ajouter_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    int qte_etat= ui->lineEdit_qte->text().toInt();
    QString date =ui->lineEdit_date->text();
   Materiels_E mat (id,qte_etat,nom,date);
  bool test= mat.ajouter_mat_e();

  if(test)
{
      ui->tab_mat->setModel(tmp_mat.afficher_mat_e()); //refresh

QMessageBox::information(nullptr, QObject::tr("Ajouter un materiels"),
                  QObject::tr("Materiels ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

//ui->statusBar->showMessage("Materiels ajouté");
  }
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un materiels"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
//ui->statusBar->showMessage("Erreur");

}

//*********************************************
               //Supprimer ***
//*********************************************

void Materiels::on_pushButton_sup_clicked()
{

    int id = ui->lineEdit_id->text().toInt();
    bool test=tmp_mat.supprimer_mat_e(id);

    if(test)

   {
        ui->tab_mat->setModel(tmp_mat.afficher_mat_e()); //refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer Matériels"),
                    QObject::tr("Matériels supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer Matériels"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
//*********************************************
        //Modifier ***
//*********************************************

void Materiels::on_pushButton_modifier_clicked()
{
   // int id = ui->lineEdit_id_modif->text().toInt();
    int id_m = ui->lineEdit_id->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    int qte_etat= ui->lineEdit_qte->text().toInt();
    QString date =ui->lineEdit_date->text();
   Materiels_E mat (id_m,qte_etat,nom,date);
  bool test= mat.modifier_mat_e(id_m);

  if(test)
{
      ui->tab_mat->setModel(tmp_mat.afficher_mat_e()); //refresh

QMessageBox::information(nullptr, QObject::tr("Ajouter un materiels"),
                  QObject::tr("Materiels ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

//ui->statusBar->showMessage("Materiels ajouté");
  }
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un materiels"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
//ui->statusBar->showMessage("Erreur");
}

//********************************
        //rechercher
//********************************
void Materiels::on_lineEdit_textChanged(const QString &arg1)
{
    QString name = ui->lineEdit->text();
    QSqlQuery query;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from mat_e where NOM like :test");
    query.prepare("Select * from mat_e where NOM='"+name+"' or id_mat='"+name+"' or quantite='"+name+"' or date_ajout='"+name+"' ");
    query.bindValue(":test", arg1+"%");
    query.exec();
    model->setQuery(query);
    ui->tab_mat->setModel(model);
    //ui->tab_mat_3->setModel(tmp_mat.afficher_recherche_mat_e());

    if (query.exec())
    {
        model->setQuery(query);
        ui->tab_mat_t->setModel(model);
    }

}
//*********************************************
        //Trier ***
//*********************************************

void Materiels::on_pushButton_trier_clicked()
{
    QSqlQuery query;
    Materiels_E mat;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from mat_e order by nom");
    query.exec();
    model->setQuery(query);
    ui->tab_mat->setModel(model);
}

//**************************************************************
        //les cruds  materiels travail
//**************************************************************
            //Ajouter mat tra ***
void Materiels::on_pushButton_ajouter_t_clicked()
{
    int id = ui->lineEdit_id_ta->text().toInt();
    QString nom= ui->lineEdit_nom_ta->text();
    int qte_etat= ui->lineEdit_qte_ta->text().toInt();
    QString date =ui->lineEdit_date_ta->text();
   Materiels_A mat (id,qte_etat,nom,date);
  bool test= mat.ajouter_mat_a();
  if(test)
{
      ui->tab_mat_t->setModel(tmp_mat_t.afficher_mat_a()); //refresh
      ui->comboBox->setModel(tmp_mat_t.afficher_mat_comboBox());
      ui->lineEdit_id_ta->setText(0);
      ui->lineEdit_nom_ta->setText(0);
      ui->lineEdit_qte_ta->setText(0);
      ui->lineEdit_date_ta->setText(0);
QMessageBox::information(nullptr, QObject::tr("Ajouter un materiels"),
                  QObject::tr("Materiels ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

//ui->statusBar->showMessage("Materiels ajouté");
 }
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un materiels"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
//ui->statusBar->showMessage("Erreur");
}


            //Modifier mat tra ***
void Materiels::on_pushButton_modifier_t_clicked()
{
    // int id = ui->lineEdit_id_modif->text().toInt();
     int id_m = ui->lineEdit_id_ta->text().toInt();
     QString nom= ui->lineEdit_nom_ta->text();
     int qte_etat= ui->lineEdit_qte_ta->text().toInt();
     QString date =ui->lineEdit_date_ta->text();
    Materiels_A mat (id_m,qte_etat,nom,date);
   bool test= mat.modifier_mat_a(id_m);
   if(test)
 {
       ui->tab_mat_t->setModel(tmp_mat_t.afficher_mat_a()); //refresh
       ui->comboBox->setModel(tmp_mat_t.afficher_mat_comboBox());
       ui->lineEdit_id_ta->setText(0);
       ui->lineEdit_nom_ta->setText(0);
       ui->lineEdit_qte_ta->setText(0);
       ui->lineEdit_date_ta->setText(0);
 QMessageBox::information(nullptr, QObject::tr("Modifier un materiels"),
                   QObject::tr("Materiels modifié.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

 //ui->statusBar->showMessage("Materiels ajouté");
   }
   else
       QMessageBox::critical(nullptr, QObject::tr("Modifier un materiels"),
                   QObject::tr("Erreur !.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
 //ui->statusBar->showMessage("Erreur");
}

            //Supprimer mat tra ***
void Materiels::on_pushButton_sup_t_clicked()
{
    int id = ui->lineEdit_id_ta->text().toInt();
    bool test=tmp_mat_t.supprimer_mat_a(id);
    if(test)

   {
        ui->lineEdit_id_ta->setText(0);
        ui->lineEdit_nom_ta->setText(0);
        ui->lineEdit_qte_ta->setText(0);
        ui->lineEdit_date_ta->setText(0);
         ui->tab_mat_t->setModel(tmp_mat_t.afficher_mat_a()); //refresh
         ui->comboBox->setModel(tmp_mat_t.afficher_mat_comboBox());
         //ui->tab_mat_t_2->setModel(tmp_mat_t.afficher_recherche_mat_a());
        QMessageBox::information(nullptr, QObject::tr("Supprimer matériels"),
                    QObject::tr("Matériels supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer matériels"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

            //Trier mat tra ***
void Materiels::on_pushButton_trier_t_clicked()
{
    QSqlQuery query;
    Materiels_A mat;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from mat_a order by nom");
    query.exec();
    model->setQuery(query);
    ui->tab_mat_t->setModel(model);
}

            //Rechercher mat tra***
void Materiels::on_lineEdit_recherche_textChanged(const QString &arg1)
{
    QString name = ui->lineEdit_recherche->text();

    QSqlQuery query;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from mat_a where NOM like :test ");
    query.prepare("Select * from mat_a where NOM='"+name+"' or id_mat='"+name+"' or etat='"+name+"' or date_ajout='"+name+"' ");
    query.bindValue(":test", arg1+"%");
    if (query.exec())
    {
        model->setQuery(query);
        ui->tab_mat_t->setModel(model);
    }

    //ui->tab_mat_t_2->setModel(tmp_mat_t.afficher_recherche_mat_a());
}

void Materiels::on_comboBox_currentIndexChanged(const QString &arg1)
{

   // QString name = ui->comboBox->currentText();
    QSqlQuery query;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from mat_a where id_mat like :test ");
    //query.prepare("Select * from mat_a where NOM='"+name+"' ");
    query.bindValue(":test", arg1+"%");
    if (query.exec())
    {
        while(query.next())
        {
            ui->lineEdit_id_ta->setText(query.value(0).toString());
            ui->lineEdit_nom_ta->setText(query.value(1).toString());
            ui->lineEdit_qte_ta->setText(query.value(2).toString());
            ui->lineEdit_date_ta->setText(query.value(3).toString());
            model->setQuery(query);
            //ui->tab_mat_t->setModel(model);
        }
    }

}

void Materiels::on_tab_mat_t_activated(const QModelIndex &index)
{
    QString val = ui->tab_mat_t->model()->data(index).toString();
     QSqlQuery query;
     query.prepare("Select * from mat_a where id_mat= '"+val+"' or nom ='"+val+"' or etat='"+val+"' or date_ajout='"+val+"' ");

     if (query.exec())
     {
         while(query.next())
         {
             ui->lineEdit_id_ta->setText(query.value(0).toString());
             ui->lineEdit_nom_ta->setText(query.value(1).toString());
             ui->lineEdit_qte_ta->setText(query.value(2).toString());
             ui->lineEdit_date_ta->setText(query.value(3).toString());
         }
     }
     else
         QMessageBox::critical(nullptr, QObject::tr("Supprimer matériels"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}

void Materiels::on_pushButton_2_clicked()
{
    ui->tab_mat_t->setModel(tmp_mat_t.afficher_mat_a());
    ui->comboBox->setModel(tmp_mat_t.afficher_mat_comboBox());

    ui->lineEdit_id_ta->setText(0);
    ui->lineEdit_nom_ta->setText(0);
    ui->lineEdit_qte_ta->setText(0);
    ui->lineEdit_date_ta->setText(0);
    ui->lineEdit_recherche->setText(0);
}


//**** fin mat ta

//mat entretien
void Materiels::on_pushButton_actu_clicked()
{
    ui->tab_mat->setModel(tmp_mat.afficher_mat_e());
    ui->comboBox->setModel(tmp_mat.afficher_mat_comboBox());

    ui->lineEdit_id->setText(0);
    ui->lineEdit_nom->setText(0);
    ui->lineEdit_qte->setText(0);
    ui->lineEdit_date->setText(0);
    ui->lineEdit->setText(0);
}

void Materiels::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from mat_e where id_mat like :test ");
    //query.prepare("Select * from mat_e where NOM='"+name+"' ");
    query.bindValue(":test", arg1+"%");
    if (query.exec())
    {
        while(query.next())
        {
            ui->lineEdit_id->setText(query.value(0).toString());
            ui->lineEdit_nom->setText(query.value(1).toString());
            ui->lineEdit_qte->setText(query.value(2).toString());
            ui->lineEdit_date->setText(query.value(3).toString());
            model->setQuery(query);
            //ui->tab_mat->setModel(model);
        }
    }

}

void Materiels::on_tab_mat_activated(const QModelIndex &index)
{
    QString val = ui->tab_mat->model()->data(index).toString();
     QSqlQuery query;
     query.prepare("Select * from mat_e where id_mat= '"+val+"' or nom='"+val+"' or quantite='"+val+"' or date_ajout='"+val+"' ");
     if (query.exec())
     {
         while(query.next())
         {
             ui->lineEdit_id->setText(query.value(0).toString());
             ui->lineEdit_nom->setText(query.value(1).toString());
             ui->lineEdit_qte->setText(query.value(2).toString());
             ui->lineEdit_date->setText(query.value(3).toString());
         }
     }
     else
         QMessageBox::critical(nullptr, QObject::tr("Supprimer matériels"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}


//****
void Materiels::on_pushButton_write_clicked()
{
    QFile fichier("E:/Etudes/ESPRIT/Esprit 2A18/Semestre 2/Projet 2A_C++/Qt_Formation/LaFerme/notif/MonFichier.txt");
    if(!fichier.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not open");
    }

    QTextStream out(&fichier);
    QString text = ui->plainTextEdit_write->toPlainText();
    out << text;
    QString vide = "";
    ui->plainTextEdit_write->setPlainText(vide);
    fichier.flush(); //we don't need to flush in reading
    fichier.close();
}

void Materiels::on_pushButton_read_clicked()
{
   /* QFile fichier("E:/Etudes/ESPRIT/Esprit 2A18/Semestre 2/Projet 2A_C++/Qt_Formation/LaFerme/notif/MonFichier.txt");
    if(!fichier.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not open");
    }

    QTextStream in(&fichier);
    QString text = in.readAll();
    ui->plainTextEdit_read->setPlainText(text);
    fichier.close();*/

    QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "E:/Etudes/ESPRIT/Esprit 2A18/Semestre 2/Projet 2A_C++/Qt_Formation/LaFerme/","All files(*.*);;Text File (*.txt);; Music File (*.mp3)");
    QDesktopServices::openUrl(QUrl("file:///"+filename,QUrl::TolerantMode));
}

void Materiels::makePlot()
{
    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
      x[i] = i/50.0 - 1; // x goes from -1 to 1
      y[i] = x[i]*x[i]; // let's plot a quadratic function
    }
    // create graph and assign data to it:

    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);
    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(0, 1);
    ui->customPlot->replot();


}
