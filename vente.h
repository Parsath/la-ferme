#ifndef VENTE_H
#define VENTE_H
#include <QDate>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Vente
{
    int id ;
    QDate date ;
    int quantite ;
    float prix ;
public:

    Vente();
    Vente(int,QDate,int,float);
bool  Ajouter ();
QSqlQueryModel * afficher();
bool  Supprimer(QString id);
QSqlQueryModel *  Recherche(QString col,QString val);
QSqlQueryModel *  tri(QString col);


};

#endif // VENTE_H
