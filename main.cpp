#include "mainwindow.h"
#include "connexion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Connexion c ;
    c.ouvrirconnexion();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    c.fermerconnexion();
}
