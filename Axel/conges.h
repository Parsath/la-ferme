#ifndef CONGES_H
#define CONGES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Conges
{
public:
    Conges();
    Conges(int,int,int,int,QString,QString);
    ~Conges();
    int get_id_conges();
    int get_id_admin();
    int get_id_ouvrier();
    int get_solde_conges();
    QString get_date_retour();
    QString get_date_depart();

  //Les fonctions crud
    QSqlQueryModel * afficher();
    QSqlQueryModel *afficher_recherche();
    QSqlQueryModel *afficher_conges_comboBox();
            //*****
    bool ajouter();
    bool supprimer(int idd);
    bool modifier(int idd);
    bool rechercher(int id);


private:
    int id_conges;
    int id_ouvrier;
    int id_admin;
    int solde_conges;
    QString date_depart;
    QString date_retour;
};



#endif // CONGES_H
