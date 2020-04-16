#include "ouvriers.h"
#include "ui_ouvriers.h"
#include "g_ouvriers.h"
#include "conges.h"
#include <QMessageBox>

ouvriers::ouvriers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ouvriers)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);
    ui->tab_ouv->setModel(tmp_ouv.afficher());
    ui->tab_conges->setModel(tmp_cong.afficher());
}

ouvriers::~ouvriers()
{
    delete ui;
}

//Debut pushbutton de configuration ********
void ouvriers::on_pushButton_home_clicked()
{
   emit HomeClicked();
}

void ouvriers::on_pushButton_Gouvriers_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void ouvriers::on_pushButton_Gconges_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void ouvriers::on_pushButton_retour_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void ouvriers::on_pushButton_retour_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
//fin pushbutton de configuration ********

        //***************************************************************************************************


//PushButton pour les cruds ***************
//*********************************************
        //Ajouter ***
//*********************************************
void ouvriers::on_pushButton_ajouter_cong_clicked()
{
    int id = ui->lineEdit_id_conges->text().toInt();
    int id_admin = ui->lineEdit_admin->text().toInt();
    int id_ouv = ui->lineEdit_id_cong_ouv->text().toInt();
    int solde= ui->lineEdit_solde_conge->text().toInt();

    QString date_dep= ui->lineEdit_Date_depart->text();
    QString date_retour =ui->lineEdit_Date_retour->text();
   Conges cong(id,id_admin,id_ouv,solde,date_dep,date_retour);
  bool test= cong.ajouter();
  if(test)
{
      ui->tab_conges->setModel(tmp_cong.afficher()); //refresh
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

void ouvriers::on_pushButton_sup_cong_clicked()
{

    int id = ui->lineEdit_id_supp_cong->text().toInt();
    bool test=tmp_cong.supprimer(id);
    if(test)

   {
        ui->tab_conges->setModel(tmp_cong.afficher()); //refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer "),
                    QObject::tr("Matériels supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer "),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
//*********************************************
        //Modifier ***
//*********************************************

void ouvriers::on_pushButton_modifier_cong_clicked()
{
    // int id = ui->lineEdit_id_modif->text().toInt();
    int id = ui->lineEdit_id_conges_mod->text().toInt();
    int id_admin = ui->lineEdit_admin_mod->text().toInt();
    int id_ouv = ui->lineEdit_id_cong_ouv_mod->text().toInt();
    int solde= ui->lineEdit_solde_conge_mod->text().toInt();
    QString date_dep= ui->lineEdit_Date_depart_mod->text();
    QString date_retour =ui->lineEdit_Date_retour_mod->text();

   Conges cong(id,id_admin,id_ouv,solde,date_dep,date_retour);
  bool test= cong.modifier(id);
   if(test)
 {
       ui->tab_conges->setModel(tmp_cong.afficher()); //refresh

 QMessageBox::information(nullptr, QObject::tr("Modification Réussi"),
                   QObject::tr("Ajouté.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

 //ui->statusBar->showMessage(" ajouté");
   }
   else
       QMessageBox::critical(nullptr, QObject::tr("Echec Modification"),
                   QObject::tr("Erreur !.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
 //ui->statusBar->showMessage("Erreur");
}

void ouvriers::on_pushButton_trier_cong_clicked()
{
    QSqlQuery query;
    Conges cong;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from conges order by id_conges");
    query.exec();
    model->setQuery(query);
    ui->tab_conges->setModel(model);
}

void ouvriers::on_lineEdit_rech_cong_textChanged(const QString &arg1)
{
    QSqlQuery query;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from conges where id_conges like :test");
    query.bindValue(":test", arg1+"%");
    query.exec();
    model->setQuery(query);
    ui->tab_conge_rech->setModel(model);
    //ui->tab_conge_rech->setModel(tmp_ouv.afficher_recherche());
}
