#ifndef FENETREANIMAUX_H
#define FENETREANIMAUX_H

#include <QApplication>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QPushButton>
#include <QObject>
#include <QWidget>
#include <QStringList>
#include <QVector>
#include <QTabWidget>
#include <QLayout>

class FenetreAnimaux : public QWidget
{
    Q_OBJECT

    public:
        FenetreAnimaux();
        void creationOnglets(QString race, QTabWidget &onglets);

    public slots:

    signals:

    private:
        QTabWidget *m_onglets;
        QString *m_race;
        QFile *m_fichierRaces;
        QVBoxLayout *m_mainLayout;
        QHBoxLayout *m_validatingLayout;



};

#endif // FENETREANIMAUX_H
