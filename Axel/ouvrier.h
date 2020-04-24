#ifndef OUVRIER_H
#define OUVRIER_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Ouvrier
{
private:
    int id_ouvrier;
    QString nom;
    QString prenom;
    QString password;
    int contact;
    int rue;
    int code_postal;
    QString ville;
public:
    ~Ouvrier();
    Ouvrier();
    Ouvrier(int,QString,QString,QString,int,int,int,QString);
    QString get_nom();
    QString get_prenom();
    QString get_ville();
    QString get_password();
    int get_id();
    int get_code();
    int get_rue();
    int get_contact();
    bool ajouter();
    bool modifier(int);
    bool supprimer(int idd);
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher_ouvrier_comboBox();
};

#endif // OUVRIER_H
