#include "materiels_e.h"
#include <QDebug>
#include "connexion.h"

//*****Les constructeurs
Materiels_E::Materiels_E()
{
    id=0;
    qte=0;
    date="";
    nom="";
}

Materiels_E::~Materiels_E()
{

}

Materiels_E::Materiels_E(int id,int qte, QString nom, QString date)
{
this->id=id;
this->qte=qte;
this->nom=nom;
this->date=date;
}
//***fin des constructeurs ***

// **Les getters ***
QString Materiels_E::get_nom(){return  nom;}
QString Materiels_E::get_date(){return date;}
int Materiels_E::get_id(){return  id;}
int Materiels_E::get_Qte(){return qte;}
// **Fin getters ***


//Les methodes crud ***


//ajout
bool Materiels_E::ajouter_mat_e()
{
QSqlQuery query;
QString res_id= QString::number(id);
QString res_qte= QString::number(qte);
query.prepare("INSERT INTO mat_e (ID_MAT, NOM, QUANTITE, DATE_AJOUT) VALUES (:id, :nom, :qte, :date)");
query.bindValue(":id", res_id);
query.bindValue(":qte", res_qte);
query.bindValue(":nom", nom);
query.bindValue(":date", date);

return    query.exec();
}
//fin ajout

//supprimer
bool Materiels_E::supprimer_mat_e(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from mat_e where ID_MAT = :id ");
query.bindValue(":id", res);
return    query.exec();
}
//fin supprimer

//afficher
QSqlQueryModel * Materiels_E::afficher_mat_e()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from mat_e");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_AJOUT"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("QUANTITE"));

return model;
}
//fin afficher

//modifier
bool Materiels_E:: modifier_mat_e(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);

query.prepare("UPDATE mat_e set ID_MAT=:id,NOM=:nom,QUANTITE=:qte, DATE_AJOUT=:date where ID_MAT=:id");
query.bindValue(":nom", nom);
query.bindValue(":qte", qte);
query.bindValue(":id", res);
query.bindValue(":date", date);

return  query.exec();
}
//fin modifier

//rechercher
bool  Materiels_E:: rechercher_mat_e(int idd)//mettre dans aller au slot
{
QSqlQueryModel *tab=new QSqlQueryModel;
QString res= QString::number(idd);
tab->setQuery("Select * from mat_e where(id="+res+")");
if(id==res)
return  true;

return  false;
}

//fin rechercher

//afficher recherche
QSqlQueryModel* Materiels_E::afficher_recherche_mat_e()
{
int idd=0;
QSqlQueryModel *tab=new QSqlQueryModel;
QString res= QString::number(idd);
tab->setQuery("Select id_mat,upper(nom),quantite,upper(date_ajout) from mat_e where(id="+res+")");
if(rechercher_mat_e(idd))
{
tab->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_MAT"));
tab->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
tab->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_AJOUT"));
tab->setHeaderData(3, Qt::Horizontal, QObject::tr("QUANTITE"));
}
return tab;
}

//fin afficher recherche


//trier


//fin trie
