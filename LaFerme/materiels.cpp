#include "materiels.h"
#include "ui_materiels.h"
#include "materiels_e.h"
#include "materiels_a.h"
#include <QMessageBox>

Materiels::Materiels(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Materiels)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->tab_mat->setModel(tmp_mat.afficher_mat_e());
    ui->tab_mat_t->setModel(tmp_mat_t.afficher_mat_a());

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

    int id = ui->lineEdit_id_2->text().toInt();
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
    int id_m = ui->lineEdit_id_5->text().toInt();
    QString nom= ui->lineEdit_nom_3->text();
    int qte_etat= ui->lineEdit_qte_3->text().toInt();
    QString date =ui->lineEdit_date_3->text();
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
    QSqlQuery query;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from mat_e where NOM like :test");
    query.bindValue(":test", arg1+"%");
    query.exec();
    model->setQuery(query);
    ui->tab_mat_t->setModel(model);
    //ui->tab_mat_3->setModel(tmp_mat.afficher_recherche_mat_e());

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
            //Ajouter ***
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


            //Modifier ***
void Materiels::on_pushButton_modifier_t_clicked()
{
    // int id = ui->lineEdit_id_modif->text().toInt();
     int id_m = ui->lineEdit_id_ts_2->text().toInt();
     QString nom= ui->lineEdit_nom_ts->text();
     int qte_etat= ui->lineEdit_qte_ts->text().toInt();
     QString date =ui->lineEdit_date_ts->text();
    Materiels_A mat (id_m,qte_etat,nom,date);
   bool test= mat.modifier_mat_a(id_m);
   if(test)
 {
       ui->tab_mat_t->setModel(tmp_mat_t.afficher_mat_a()); //refresh

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

            //Supprimer ***
void Materiels::on_pushButton_sup_t_clicked()
{
    int id = ui->lineEdit_id_ts->text().toInt();
    bool test=tmp_mat_t.supprimer_mat_a(id);
    if(test)

   {
         ui->tab_mat_t->setModel(tmp_mat_t.afficher_mat_a()); //refresh
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

            //Trier ***
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

            //Rechercher ***
void Materiels::on_lineEdit_recherche_textChanged(const QString &arg1)
{
    QSqlQuery query;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from mat_a where NOM like :test");
    query.bindValue(":test", arg1+"%");
    query.exec();
    model->setQuery(query);
    ui->tab_mat_t->setModel(model);
    //ui->tab_mat_t_2->setModel(tmp_mat_t.afficher_recherche_mat_a());
}
