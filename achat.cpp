#include "achat.h"

Achat::Achat()
{

}
Achat::Achat(int i,QDate d ,int q,float p)
{
id = i ;
date = d ;
quantite = q ;
prix = p ;
}

bool Achat :: Ajouter (){
    QSqlQuery q;
    QString p ;
      p.setNum(prix);
q.prepare("INSERT INTO Achat VALUES(:id,TO_DATE(:date, 'MM/DD/YYYY'),:quantite,:prix);");
q.bindValue(":id",QString::number(id));
q.bindValue(":date",date.toString("MM/dd/yyyy "));
q.bindValue(":quantite",QString::number(quantite));
q.bindValue(":prix",p);
return q.exec();
}


QSqlQueryModel *Achat :: afficher(){
QSqlQueryModel *model = new QSqlQueryModel() ;
model->setQuery("SELECT * FROM Achat");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("Date"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("Quantite"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("Prix"));

return model ;
 }

bool Achat :: Supprimer(QString id){
    QSqlQuery q ;
        q.prepare("DELETE FROM Achat WHERE id = :id ;");
        q.bindValue(":id",id);
        return q.exec();
}
QSqlQueryModel * Achat :: Recherche(QString col,QString val){
QSqlQueryModel *model = new QSqlQueryModel() ;
QString header = "SELECT * FROM Achat WHERE "+col+" LIKE '"+val+"%'";
model->setQuery(header);
model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("Date"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("Quantite"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("Prix"));
    return model ;
}
QSqlQueryModel * Achat :: tri(QString col){
    QSqlQueryModel *model = new QSqlQueryModel() ;
    QString header = "SELECT * FROM Achat ORDER BY "+col;
    model->setQuery(header);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Prix"));
        return model ;
}
bool Achat :: modifier(int id,QString nv,QString nomc){
     QString header ;
    QSqlQuery q;
    if (nomc!="Date"){
       header = "UPDATE Achat SET "+nomc+"=:nv WHERE (ID= :id);";
        q.prepare(header);
        q.bindValue(":nv",nv);
        q.bindValue(":id",id);
    }else {
       header =  "UPDATE Achat SET DATEA= TO_DATE(:date, 'MM/DD/YYYY') WHERE (ID= :id);";
       q.prepare(header);
    q.bindValue(":date",nv);
    q.bindValue(":id",id);
    }
    return q.exec();
}
