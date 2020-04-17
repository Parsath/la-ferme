#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connexion.h"
#include "fenetreanimaux.h"

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);

   FenetreAnimaux fenetreAnimaux;
   fenetreAnimaux.show();

   /*Connexion c;
   bool test= c.ouvrirConnexion();

     if(test)
   {
       //w.show();
   }
        else
           QMessageBox::information(nullptr, QObject::tr("database is not open"),
              QObject::tr("Echec de la connexion.\n""Click Cancel to exit."), QMessageBox::Cancel);

    */

    return a.exec();
}
