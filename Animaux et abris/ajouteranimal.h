#ifndef AJOUTERANIMAL_H
#define AJOUTERANIMAL_H

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

class AjouterAnimal : public QWizard
{
    Q_OBJECT

    public:
        AjouterAnimal(QWidget *parent = nullptr);

    public slots:
        void accept() override;

    signals:

    private:
};

class PageUne : public QWizardPage
{
    Q_OBJECT

    public:
        PageUne(QWidget *parent = nullptr);

    public slots:
        void ajouterRace();
        void validerRace();
        void ajouterFoyer();
        void validerFoyer();


    signals:

    private:
        QGroupBox *m_interfaceAjoutPageUne;
        QLineEdit *m_surnom;
        QLabel *m_surnomLabel;
        QComboBox *m_race;
        QLabel *m_raceLabel;
        QComboBox *m_foyer;
        QLabel *m_foyerLabel;

        QPushButton *m_raceAdd;
        QPushButton *m_foyerAdd;

        QVBoxLayout *m_mainLayoutPageUn;
        QHBoxLayout *m_raceLayout;
        QHBoxLayout *m_foyerLayout;

        QDialog *m_ajoutRace;
        QLineEdit *m_nomRace;
        QDialog *m_ajoutFoyer;
        QLineEdit *m_nomFoyer;

};

class PageDeux : public QWizardPage
{
    Q_OBJECT

    public:
        PageDeux(QWidget *parent = nullptr);

    public slots:

    signals:

    private:
        QGroupBox *m_interfaceAjoutPageDeux;
        QComboBox *m_qualites;
        QLabel *m_qualitesLabel;
        QSpinBox *m_age;
        QLabel *m_ageLabel;
        QComboBox *m_objectifs;
        QLabel *m_objectifsLabel;
        QSpinBox *m_valeur;
        QLabel *m_valeurLabel;

        QVBoxLayout *m_mainLayoutPageDeux;

};

#endif // AJOUTERANIMAL_H
