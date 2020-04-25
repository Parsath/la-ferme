#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connexion.h"
#include "fenetreanimaux.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Connexion c;
    bool test= c.ouvrirConnexion();

    FenetreAnimaux fenetreAnimaux;

    if(test)
    {
       fenetreAnimaux.show();
    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("database is not open"),
        QObject::tr("Echec de la connexion.\n""Click Cancel to exit."), QMessageBox::Cancel);
    }


    /*
    GestionAnimal essai("Fat7i","Cheval","AAA", "Equitation", 123, "Etable", 999);
    if(essai.ajouterAnimal())
    {
        QMessageBox::information(nullptr,"YES", "ça MARCHE");

    }
    else
    {
        QMessageBox::critical(nullptr,"Erreur", "L'ajout n'a pas marché");
    }
    */

    return a.exec();
}
