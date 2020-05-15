#ifndef MODIF_H
#define MODIF_H
#include <QString>
#include <QDialog>
#include "achat.h"
#include "vente.h"

namespace Ui {
class Modif;
}

class Modif : public QDialog
{
    Q_OBJECT

public:
    explicit Modif(QWidget *parent = nullptr);
    ~Modif();
    void setnomc(QString);
    void setnomt(QString);

    void setid(int i){
        id = i;
    }
private slots:
    void on_buttonBox_accepted();

private:
    QString nomc ;
QString type ;
    Ui::Modif *ui;
  Achat atmp ;
  Vente vtmp ;
  int id ;
};

#endif // MODIF_H
