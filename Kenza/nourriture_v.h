#ifndef NOURRITURE_V_H
#define NOURRITURE_V_H

#include <QString>
#include <QtWidgets>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>


class nourriture_v
{
private:
    int id;
    QString aliment;
    QString plante;
    QString type;
    int qt;

public:
    nourriture_v();
    nourriture_v(int, QString, QString, QString, int);
    int get_id();
    QString get_aliment();
    QString get_plante();
    QString get_type();
    int get_qt();
    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher_id();
    bool modifier(int);
    bool supprimer(int);
    QSqlQueryModel * trieQt();
    QSqlQueryModel * trieId();

    bool controle_id(int);
};

#endif // NOURRITURE_V_H
