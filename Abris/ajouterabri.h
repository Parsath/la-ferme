#ifndef AJOUTERABRI_H
#define AJOUTERABRI_H

#include <QApplication>
#include <QWidget>
#include <QDialog>
#include <QPushButton>
#include <QWizard>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QLayout>
#include <QComboBox>
#include <QGroupBox>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDir>
#include <QPrinter>
#include <QPainter>
#include "gestionabri.h"

class AjouterAbri : public QWizard
{
    Q_OBJECT

    public:
        AjouterAbri(QWidget *parent = nullptr);

        void accept() override;

    private:
        GestionAbri *m_abri;
};

class PageUne : public QWizardPage
{
    Q_OBJECT

    public:
        PageUne(QWidget *parent = nullptr);

    public slots:
        void ajouterFoyer();
        void validerFoyer();

    private:
        QGroupBox *m_interfaceAjoutPageUne;
        QSpinBox *m_capacite;
        QLabel *m_capaciteLabel;

        QComboBox *m_etat;
        QLabel *m_etatLabel;

        QComboBox *m_foyer;
        QLabel *m_foyerLabel;

        QPushButton *m_foyerAdd;

        QVBoxLayout *m_mainLayoutPageUn;
        QHBoxLayout *m_etatLayout;
        QHBoxLayout *m_foyerLayout;

        QDialog *m_ajoutFoyer;
        QLineEdit *m_nomFoyer;


};

#endif // AJOUTERABRI_H
