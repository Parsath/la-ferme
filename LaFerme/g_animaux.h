#ifndef G_ANIMAUX_H
#define G_ANIMAUX_H

#include <QWidget>
#include "animaux.h"
namespace Ui {
class G_animaux;
}

class G_animaux : public QWidget
{
    Q_OBJECT

public:
    explicit G_animaux(QWidget *parent = nullptr);
    ~G_animaux();

private:
    Ui::G_animaux *ui;
    animaux tmp_ani;
signals:
    void HomeClicked();
private slots:
    void on_pushButton_home_clicked();
    void on_pushButton_retour_clicked();
    void on_pushButton_retour_2_clicked();
    void on_pushButton_ani_clicked();
    void on_pushButton_abris_clicked();
    void on_pushButton_ajouter_ouv_clicked();
    void on_pushButton_modifier_ani_clicked();
    void on_pushButton_sup_ani_clicked();
    void on_lineEdit_recherche_ani_textChanged(const QString &arg1);
    void on_pushButton_trier_ani_clicked();
};

#endif // G_ANIMAUX_H
