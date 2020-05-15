#include "statistique.h"
#include <QDebug>
#include <algorithm>
using namespace  std;
Statistique::Statistique()
{



}
QChartView * Statistique::Preparechart(QString type)
{
    QSqlQuery query;



    if(type=="PIE"){
      QPieSeries *series;
    series = new QPieSeries();

    if(query.exec("select datea,sum(prix) from vente group by datea"))
    {
    while(query.next())
      {
    series->append(query.value(0).toString(), query.value(1).toFloat());
    }
    }
    chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Dépenses Par rapport a date");
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    }
   else if(type=="BARRE"){
        QBarSeries *series = new QBarSeries();

        if(query.exec("select datea,sum(prix) from vente group by datea"))
        {
        while(query.next())
          {
            QBarSet *set0 = new QBarSet(query.value(0).toString());


            *set0 << query.value(1).toFloat() ;
            series->append(set0);

        }
        }

                 chart = new QChart();
                 chart->addSeries(series);
                 chart->setTitle("STATISTIQUE");
                 chart->setAnimationOptions(QChart::SeriesAnimations);
                 QStringList categories;
                 categories << "EMAIL_S" ;
                 QBarCategoryAxis *axisX = new QBarCategoryAxis();
                 axisX->append(categories);
                 chart->addAxis(axisX, Qt::AlignBottom);
                 series->attachAxis(axisX);
                 QValueAxis *axisY = new QValueAxis();
                 query.exec(" select max(prix) from vente");
                 axisY->setRange(0,query.value(0).toFloat());
                 chart->addAxis(axisY, Qt::AlignLeft);
                 series->attachAxis(axisY);
                 chart->legend()->setVisible(true);
                 chart->legend()->setAlignment(Qt::AlignBottom);
                 chartView = new QChartView(chart);
                 chartView->setRenderHint(QPainter::Antialiasing);
    }


return chartView;
}
