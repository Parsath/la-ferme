#ifndef MATERIELS_H
#define MATERIELS_H

#include <QWidget>
#include "materiels_e.h"
#include "materiels_a.h"
namespace Ui {
class Materiels;
}

class Materiels : public QWidget
{
    Q_OBJECT

public:
    explicit Materiels(QWidget *parent = nullptr);
    ~Materiels();

private slots:
    void on_pushButton_home_clicked();
    void on_pushButton_entretien_clicked();
    void on_pushButton_travail_clicked();
    void on_pushButton_retour_clicked();
    void on_pushButton_retour_2_clicked();
    void on_pushButton_ajouter_clicked();

    void on_pushButton_sup_clicked();

    void on_pushButton_modifier_clicked();
    void on_lineEdit_textChanged(const QString &arg1);
    void on_pushButton_trier_clicked();
    void on_pushButton_ajouter_t_clicked();
    void on_pushButton_modifier_t_clicked();
    void on_pushButton_sup_t_clicked();
    void on_pushButton_trier_t_clicked();
    void on_lineEdit_recherche_textChanged(const QString &arg1);

private:
    Ui::Materiels *ui;
    Materiels_E tmp_mat;
    Materiels_A tmp_mat_t;
signals:
    void HomeClicked();
};

#endif // MATERIELS_H
