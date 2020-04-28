#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connexion.h"
#include "fenetreanimaux.h"
#include "smtp.h"
#include "QPrinter"
#include "QPainter"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    qDebug()<<QSslSocket::supportsSsl() << QSslSocket::sslLibraryBuildVersionString();


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

    /*QPrinter printer2;
    printer2.setOutputFormat(QPrinter::PdfFormat);
    //printer2.setOutputFileName("C:\\Users\\Asus\\Desktop\\Dev\\Qt\\Projet Qt\\Animaux et abris\\test.pdf");
    printer2.setOutputFileName("test.pdf");
    QPainter painter2(&printer2);
    painter2.drawText(500,500, "Test");
    painter2.end();*/

    //GestionAnimal::fichierAnimal("Cheval", "Fat7i", "AAA", 666, "Equitation", "Etable", 5);


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
