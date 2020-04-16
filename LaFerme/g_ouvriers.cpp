#include "g_ouvriers.h"

G_Ouvriers::G_Ouvriers()
{
    id_ouvrier=0;
    nom=" ";
    prenom=" ";
    password=" ";
    contact=0;
    rue=0;
    code_postal=0;
    ville=" ";
}


G_Ouvriers::~G_Ouvriers()
{

}

G_Ouvriers::G_Ouvriers(int id,QString nom,QString prenom,QString pwd,int C,int R,int CP,QString V)
{
    this->id_ouvrier=id;
    this->nom=nom;
    this->prenom=prenom;
    this->password=pwd;
    this->contact=C;
    this->rue=R;
    this->code_postal=CP;
    this->ville=V;
}

//les getterss **********
QString G_Ouvriers::get_nom()
{
    return nom;
}

QString G_Ouvriers:: get_prenom()
{
    return prenom;
}

QString G_Ouvriers::get_ville()
{
    return ville;
}

QString G_Ouvriers:: get_password()
{
    return password;
}

int G_Ouvriers:: get_id()
{
    return id_ouvrier;
}

int G_Ouvriers:: get_rue()
{
    return rue;
}

int G_Ouvriers:: get_contact()
{
    return contact;
}

int G_Ouvriers:: get_code()
{
    return code_postal;
}

//fin getterss ************

//debut des crud **********

bool G_Ouvriers::ajouter()
{
    QSqlQuery query;
    QString  res=QString ::number(id_ouvrier);
    QString  res1=QString ::number(contact);
    QString  res2=QString ::number(rue);
    QString  code=QString ::number(code_postal);
    query.prepare("INSERT INTO ouvrier (id_ouvrier, nom, prenom, mot_de_passe, contact, rue, code_postal, ville) VALUES (:id, :nom, :prenom, :pwd, :contact, :rue, :code, :ville)");
    query.bindValue(":id",res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":contact",res1);
    query.bindValue(":rue",res2);
    query.bindValue(":code",code);
    query.bindValue(":ville",ville);
    query.bindValue(":pwd",password);
    return query.exec();
}

QSqlQueryModel * G_Ouvriers::afficher()
{
  QSqlQueryModel *model= new QSqlQueryModel();
  model->setQuery("select * from ouvrier") ;
          model->setHeaderData(0,Qt::Horizontal, QObject::tr("ID"));
          model->setHeaderData(1,Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(3,Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(4,Qt::Horizontal, QObject::tr("PASSWORD"));
          model->setHeaderData(5,Qt::Horizontal, QObject::tr("CONTACT"));
          model->setHeaderData(6,Qt::Horizontal, QObject::tr("RUE"));
          model->setHeaderData(7,Qt::Horizontal, QObject::tr("CODE POSTAL"));
          model->setHeaderData(8,Qt::Horizontal, QObject::tr("VILLE"));
          return model;
}

bool G_Ouvriers::supprimer(int idd)
{
    QSqlQuery query;
    QString  res=QString ::number(idd);
    query.prepare("Delete from ouvrier where ID_OUVRIER = :id");
    query.bindValue(":id",res);
    return query.exec();
}

//fin des cruds *************
