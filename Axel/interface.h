#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include "conges.h"
#include "ouvrier.h"

namespace Ui {
class Interface;
}

class Interface : public QWidget
{
    Q_OBJECT

public:
    explicit Interface(QWidget *parent = nullptr);
    ~Interface();

private slots:
    void on_pushButton_ajout_con_clicked();

    void on_pushButton_modif_con_clicked();

    void on_pushButton_supp_con_clicked();

    void on_lineEdit_rech_con_id_textChanged(const QString &arg1);

    void on_pushButton_tri_con_clicked();

    void on_comboBox_con_currentIndexChanged(const QString &arg1);

    void on_pushButton_17_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_retour_con_clicked();

    void on_pushButton_retour_ad_clicked();

    void on_pushButton_retour_ouv_clicked();

    void on_tab_conges_activated(const QModelIndex &index);

    void on_pushButton_actu_con_clicked();

    void on_pushButton_ajout_ouv_clicked();

    void on_pushButton_supp_ouv_clicked();

    void on_pushButton_modif_ouv_clicked();

    void on_lineEdit_rech_ouv_id_textChanged(const QString &arg1);

    void on_pushButton_tri_ouv_clicked();

    void on_comboBox_ouv_currentIndexChanged(const QString &arg1);

    void on_tab_ouvrier_activated(const QModelIndex &index);

    void on_pushButton_actu_ouv_clicked();

    void on_pushButton_printer_ouv_clicked();

    void on_pushButton_printer_con_clicked();

private:
    Ui::Interface *ui;
    Conges tmp_cong;
    Ouvrier tmp_ouv;

};

#endif // INTERFACE_H
