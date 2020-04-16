#ifndef MATERIELS_E_H
#define MATERIELS_E_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Materiels_E
{ 
public:
    Materiels_E();
    Materiels_E(int,int,QString,QString);
    ~Materiels_E();
    QString get_nom();
    QString get_date();
    int get_id();
    int get_Qte();

  //Les fonctions crud
    QSqlQueryModel * afficher_mat_e();
    QSqlQueryModel *afficher_recherche_mat_e();
            //*****
    bool ajouter_mat_e();
    bool modifier_mat_e(int idd);
    bool  rechercher_mat_e(int id);
    bool supprimer_mat_e(int);


private:
    QString nom,date;
    int id,qte;

};



#endif // MATERIELS_E_H
