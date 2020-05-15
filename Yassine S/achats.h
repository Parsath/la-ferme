#ifndef ACHATS_H
#define ACHATS_H
#include "achat.h"

#include "statistiquea.h"

#include <QDialog>
#include "QVBoxLayout"

namespace Ui {
class Achats;
}

class Achats : public QDialog
{
    Q_OBJECT

public:
    explicit Achats(QWidget *parent = nullptr);
    ~Achats();

private slots:
    void on_pb_ajouter_4_clicked();

    void on_pb_supprimer_4_clicked();

    void on_lineEdit_6_textChanged(const QString &arg1);

    void on_comboBox_7_activated(const QString &arg1);

    void on_pushButton_4_clicked();

    void on_types_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::Achats *ui;
    Achat A ;
    Statistiquea stat;
    QVBoxLayout* mainLayout;
};

#endif // ACHATS_H
