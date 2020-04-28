#ifndef MODIFIERABRI_H
#define MODIFIERABRI_H

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
#include "gestionabri.h"


class ModifierAbri : public QWizard
{
    Q_OBJECT

    public:
        ModifierAbri(QWidget *parent = nullptr);

        void accept() override;

    private:
        GestionAbri *m_abri;

};

class PageUneModifier : public QWizardPage
{
    Q_OBJECT

    public:
        PageUneModifier(QWidget *parent = nullptr);

    public slots:
        void ajouterFoyer();
        void validerFoyer();

    private:
        QGroupBox *m_interfaceAjoutPageUne;

        QSpinBox *m_id;
        QLabel *m_idLabel;

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

#endif // MODIFIERABRI_H
