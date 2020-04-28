#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connexion.h"
#include "fenetreabri.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    //qDebug()<<QSslSocket::supportsSsl() << QSslSocket::sslLibraryBuildVersionString();


    Connexion c;
    bool test= c.ouvrirConnexion();

    FenetreAbri fenetreAbris;

    if(test)
    {
       fenetreAbris.show();
    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("database is not open"),
        QObject::tr("Echec de la connexion.\n""Click Cancel to exit."), QMessageBox::Cancel);
    }

    return a.exec();
}
