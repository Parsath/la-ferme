#ifndef VENTES_H
#define VENTES_H
#include "vente.h"

#include <QDialog>

namespace Ui {
class Ventes;
}

class Ventes : public QDialog
{
    Q_OBJECT

public:
    explicit Ventes(QWidget *parent = nullptr);
    ~Ventes();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();


    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_comboBox_activated(const QString &arg1);

private:
    Vente V;
    Ui::Ventes *ui;
};

#endif // VENTES_H
