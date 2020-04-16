#include "conges.h"

Conges::Conges()
{
 id_conges=0;
 id_admin=0;
 id_ouvrier=0;
 solde_conges=0;
 date_depart=" ";
 date_retour=" ";
}

Conges::~Conges()
{

}

Conges::Conges(int id,int id1,int id2,int solde,QString depart,QString retour)
{
    this->id_conges=id;
    this->id_admin=id1;
    this->id_ouvrier=id2;
    this->solde_conges=solde;
    this->date_depart=depart;
    this->date_retour=retour;
}

int Conges:: get_id_admin()
{
    return id_admin;
}

int Conges::get_id_ouvrier()
{
    return id_ouvrier;
}

int Conges:: get_id_conges()
{
    return id_conges;
}

int Conges::get_solde_conges()
{
    return solde_conges;
}

QString Conges:: get_date_depart()
{
    return date_depart;
}

QString Conges:: get_date_retour()
{
    return date_retour;
}

bool Conges::ajouter()
{
    QSqlQuery query;
    QString  res=QString ::number(id_ouvrier);
    QString  res1=QString ::number(id_admin);
    QString  res2=QString ::number(id_conges);
    QString  solde=QString ::number(solde_conges);
    query.prepare("INSERT INTO conges (id_conges, id_admin, id_ouvrier, date_depart, date_retour, solde_conges) VALUES (:id, :id1, :id2, :date1, :date2, :solde)");
    query.bindValue(":id",res);
    query.bindValue(":id1",res1);
    query.bindValue(":id2",res2);
    query.bindValue(":date1",date_depart);
    query.bindValue(":date2",date_retour);
    query.bindValue(":solde",solde);
    return query.exec();
}

QSqlQueryModel * Conges::afficher()
{
  QSqlQueryModel *model= new QSqlQueryModel();
  model->setQuery("select * from conges") ;
          model->setHeaderData(0,Qt::Horizontal, QObject::tr("ID_CONGES"));
          model->setHeaderData(1,Qt::Horizontal, QObject::tr("ID_ADMIN"));
          model->setHeaderData(2,Qt::Horizontal, QObject::tr("ID_OUVRIER"));
          model->setHeaderData(3,Qt::Horizontal, QObject::tr("DATE_DEPART"));
          model->setHeaderData(4,Qt::Horizontal, QObject::tr("DATE_RETOUR"));
          model->setHeaderData(5,Qt::Horizontal, QObject::tr("SOLDE"));
          return model;
}

bool Conges::supprimer(int idd)
{
    QSqlQuery query;
    QString  res=QString ::number(idd);
    query.prepare("Delete from conges where ID_CONGES = :id");
    query.bindValue(":id",res);
    return query.exec();
}

//modifier
bool Conges:: modifier(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);

query.prepare("UPDATE conges set id_conges=:id_conges, id_admin=:id_admin, id_ouvrier=:id_ouvrier, date_depart=:date_depart, date_retour=:date_retour, solde_conges=:solde_conges  where id_conges=:id_conges");
query.bindValue(":id_admin", id_admin);
query.bindValue(":id_ouvrier", id_ouvrier);
query.bindValue(":id_conges", res);
query.bindValue(":date_depart", date_depart);
query.bindValue(":date_retour", date_retour);
query.bindValue(":solde_conges", solde_conges);

return  query.exec();
}
//fin modifier

//rechercher
bool  Conges:: rechercher(int idd)//mettre dans aller au slot
{
QSqlQueryModel *tab=new QSqlQueryModel;
QString res= QString::number(idd);
tab->setQuery("Select * from conges where(id_conges="+res+")");
if(id_conges==res)
return  true;

return  false;
}

//fin rechercher

//afficher recherche
QSqlQueryModel* Conges::afficher_recherche()
{
int idd=0;
QSqlQueryModel *tab=new QSqlQueryModel;
QString res= QString::number(idd);
tab->setQuery("Select id_conges,upper(id_admin),id_ouvrier,upper(date_depart),upper(date_retour),solde_conges from conges where(id_conges="+res+")");
if(rechercher(idd))

{
tab->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_Conges"));
tab->setHeaderData(1, Qt::Horizontal, QObject::tr("ID_Admin "));
tab->setHeaderData(2, Qt::Horizontal, QObject::tr("ID_Ouvrier"));
tab->setHeaderData(3, Qt::Horizontal, QObject::tr("Date_Depart"));
tab->setHeaderData(4, Qt::Horizontal, QObject::tr("Date_Retour"));
tab->setHeaderData(5, Qt::Horizontal, QObject::tr("Solde_Conges"));
}
return tab;
}

//fin afficher recherche
