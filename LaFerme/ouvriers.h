#ifndef OUVRIERS_H
#define OUVRIERS_H

#include <QWidget>
#include "g_ouvriers.h"
#include "conges.h"

namespace Ui {
class ouvriers;
}

class ouvriers : public QWidget
{
    Q_OBJECT

public:
    explicit ouvriers(QWidget *parent = nullptr);
    ~ouvriers();

private slots:


    void on_pushButton_home_clicked();

    void on_pushButton_Gouvriers_clicked();

    void on_pushButton_Gconges_clicked();

    void on_pushButton_retour_clicked();

    void on_pushButton_retour_2_clicked();

    void on_pushButton_ajouter_cong_clicked();

    void on_pushButton_sup_cong_clicked();

    void on_pushButton_modifier_cong_clicked();

    void on_pushButton_trier_cong_clicked();

    void on_lineEdit_rech_cong_textChanged(const QString &arg1);

private:
    Ui::ouvriers *ui;
   G_Ouvriers tmp_ouv;
    Conges tmp_cong;
signals:
    void HomeClicked();
};

#endif // OUVRIERS_H
