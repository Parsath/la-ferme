#include "g_animaux.h"
#include "ui_g_animaux.h"
#include "animaux.h"
#include <QMessageBox>

G_animaux::G_animaux(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::G_animaux)
{
    ui->setupUi(this);
    ui->tab_ani->setModel(tmp_ani.afficher());
}

G_animaux::~G_animaux()
{
    delete ui;
}

void G_animaux::on_pushButton_home_clicked()
{
    emit HomeClicked();
}

void G_animaux::on_pushButton_retour_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void G_animaux::on_pushButton_retour_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void G_animaux::on_pushButton_ani_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void G_animaux::on_pushButton_abris_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//PushButton pour les cruds de la table animaux ***************
//*********************************************
        //Ajouter ***
//*********************************************
void G_animaux::on_pushButton_ajouter_ouv_clicked()
{
    int id = ui->lineEdit_id_ani->text().toInt();
    QString qualite= ui->lineEdit_qualite->text();
    int prix= ui->lineEdit_prix->text().toInt();
    QString type =ui->lineEdit_type_ani->text();
   animaux ani (id,prix,type,qualite);
  bool test= ani.ajouter();
  if(test)
{
      ui->tab_ani->setModel(tmp_ani.afficher()); //refresh

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

void G_animaux::on_pushButton_sup_ani_clicked()
{
    int id = ui->lineEdit_id_ani_sup->text().toInt();
    bool test=tmp_ani.supprimer(id);
    if(test)

   {
        ui->tab_ani->setModel(tmp_ani.afficher()); //refresh
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

void G_animaux::on_pushButton_modifier_ani_clicked()
{
   // int id = ui->lineEdit_id_modif->text().toInt();
    int id = ui->lineEdit_id_ani_modif->text().toInt();
    QString qualite= ui->lineEdit_qualite_modif->text();
    int prix= ui->lineEdit_prix_modif->text().toInt();
    QString type =ui->lineEdit_type_ani_modif->text();
   animaux ani (id,prix,qualite,type);
  bool test= ani.modifier(id);
  if(test)
{
      ui->tab_ani->setModel(tmp_ani.afficher()); //refresh

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
void G_animaux::on_lineEdit_recherche_ani_textChanged(const QString &arg1)
{
    QSqlQuery query;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from animaux where TYPE_ANI like :test");
    query.bindValue(":test", arg1+"%");
    query.exec();
    model->setQuery(query);
    ui->tab_ani_rech->setModel(model);
    //ui->tab_ani_rech->setModel(tmp_ani.afficher_recherche());

}

//*********************************************
        //Trier ***
//*********************************************

void G_animaux::on_pushButton_trier_ani_clicked()
{
    QSqlQuery query;
    animaux ani;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from animaux order by TYPE_ANI");
    query.exec();
    model->setQuery(query);
    ui->tab_ani_rech->setModel(model);
}
