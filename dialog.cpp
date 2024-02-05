#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    QBrush BlueBrush(Qt::blue);
    QBrush GreenBrush(Qt::green);
    QBrush RedBrush(Qt::red);
    QPen Blackpen(Qt::black);
    Blackpen.setWidth(5);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    disk1 = scene->addRect(-490, 330, 290, 70, Blackpen,BlueBrush);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    disk2 = scene->addRect(-460, 263, 230, 65, Blackpen,GreenBrush);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    disk3 = scene->addRect(-435, 200, 180, 60, Blackpen,RedBrush);

}
Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

}

void Dialog::on_pushButton_2_clicked()
{

}

void Dialog::on_pushButton_3_clicked()
{

}
void Dialog::on_Number_clicked()
{

}
void Dialog::on_Next_clicked()
{
    QBrush BlueBrush(Qt::blue);
    QBrush GreenBrush(Qt::green);
    QBrush RedBrush(Qt::red);
    QPen Blackpen(Qt::black);
    Blackpen.setWidth(5);
   if(count==0){
      scene->clear();
      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
     disk1 = scene->addRect(-490, 330, 290, 70, Blackpen,BlueBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk2 = scene->addRect(-460, 263, 230, 65, Blackpen,GreenBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk3 = scene->addRect(142, 340, 180, 60, Blackpen,RedBrush);
      count++;
      ui->Number->setText("1");
  }
  else if(count==1){

      scene->clear();
      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk1 = scene->addRect(-490, 330, 290, 70, Blackpen,BlueBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk2 = scene->addRect(-170, 336, 230, 65, Blackpen,GreenBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk3 = scene->addRect(142, 340, 180, 60, Blackpen,RedBrush);
      count++;
       ui->Number->setText("2");
  }
  else if(count==2){
      scene->clear();
      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk1 = scene->addRect(-490, 330, 290, 70, Blackpen,BlueBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk2 = scene->addRect(-170, 336, 230, 65, Blackpen,GreenBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk3 = scene->addRect(-147, 273, 180, 60, Blackpen,RedBrush);
      ++count;
       ui->Number->setText("3");
  }
  else if(count==3){
      scene->clear();
      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk1 = scene->addRect(90, 330, 290, 70, Blackpen,BlueBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk2 = scene->addRect(-170, 336, 230, 65, Blackpen,GreenBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk3 = scene->addRect(-147, 273, 180, 60, Blackpen,RedBrush);
      ++count;
       ui->Number->setText("4");
  }
  else if(count==4){
      scene->clear();
      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk1 = scene->addRect(90, 330, 290, 70, Blackpen,BlueBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk2 = scene->addRect(-170, 336, 230, 65, Blackpen,GreenBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk3 = scene->addRect(-435, 340, 180, 60, Blackpen,RedBrush);
      ++count;
       ui->Number->setText("5");
  }
else if(count==5){
      scene->clear();
      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk1 = scene->addRect(90, 330, 290, 70, Blackpen,BlueBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk2 = scene->addRect(120, 263, 230, 65, Blackpen,GreenBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk3 = scene->addRect(-435, 340, 180, 60, Blackpen,RedBrush);
      ++count;
       ui->Number->setText("6");
  }
  else if(count==6){
      scene->clear();
      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk1 = scene->addRect(90, 330, 290, 70, Blackpen,BlueBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk2 = scene->addRect(120, 263, 230, 65, Blackpen,GreenBrush);

      ui->graphicsView->setRenderHint(QPainter::Antialiasing);
      scene->setSceneRect(-10,190,-110,50);
      disk3 = scene->addRect(145, 200, 180, 60, Blackpen,RedBrush);
      ++count;
       ui->Number->setText("7");
       ui->Next->setEnabled(false);
  }
}
void Dialog::on_Reset_clicked()
{
    ui->Next->setEnabled(true);
    count=0;
     ui->Number->setText("0");
    scene->clear();
    QBrush BlueBrush(Qt::blue);
    QBrush GreenBrush(Qt::green);
    QBrush RedBrush(Qt::red);
    QPen Blackpen(Qt::black);
    Blackpen.setWidth(5);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    disk1 = scene->addRect(-490, 330, 290, 70, Blackpen,BlueBrush);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    disk2 = scene->addRect(-460, 263, 230, 65, Blackpen,GreenBrush);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-10,190,-110,50);
    disk3 = scene->addRect(-435, 200, 180, 60, Blackpen,RedBrush);
}
void Dialog::on_Back_clicked()
{
    QBrush BlueBrush(Qt::blue);
    QBrush GreenBrush(Qt::green);
    QBrush RedBrush(Qt::red);
    QPen Blackpen(Qt::black);
    Blackpen.setWidth(5);
    --count;
   if(count<=0){
       count=0;
       scene->clear();
       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk1 = scene->addRect(-490, 330, 290, 70, Blackpen,BlueBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk2 = scene->addRect(-460, 263, 230, 65, Blackpen,GreenBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk3 = scene->addRect(-435, 200, 180, 60, Blackpen,RedBrush);
       ui->Number->setText("0");
  }
  else if(count==1){

       scene->clear();
       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
      disk1 = scene->addRect(-490, 330, 290, 70, Blackpen,BlueBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk2 = scene->addRect(-460, 263, 230, 65, Blackpen,GreenBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk3 = scene->addRect(142, 340, 180, 60, Blackpen,RedBrush);

       ui->Number->setText("1");
  }
  else if(count==2){
       scene->clear();
       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk1 = scene->addRect(-490, 330, 290, 70, Blackpen,BlueBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk2 = scene->addRect(-170, 336, 230, 65, Blackpen,GreenBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk3 = scene->addRect(142, 340, 180, 60, Blackpen,RedBrush);

        ui->Number->setText("2");
  }
  else if(count==3){
       scene->clear();
       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk1 = scene->addRect(-490, 330, 290, 70, Blackpen,BlueBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk2 = scene->addRect(-170, 336, 230, 65, Blackpen,GreenBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk3 = scene->addRect(-147, 273, 180, 60, Blackpen,RedBrush);

        ui->Number->setText("3");
  }
  else if(count==4){
       scene->clear();
       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk1 = scene->addRect(90, 330, 290, 70, Blackpen,BlueBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk2 = scene->addRect(-170, 336, 230, 65, Blackpen,GreenBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk3 = scene->addRect(-147, 273, 180, 60, Blackpen,RedBrush);

        ui->Number->setText("4");
  }
else if(count==5){
       scene->clear();
       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk1 = scene->addRect(90, 330, 290, 70, Blackpen,BlueBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk2 = scene->addRect(-170, 336, 230, 65, Blackpen,GreenBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk3 = scene->addRect(-435, 340, 180, 60, Blackpen,RedBrush);

        ui->Number->setText("5");
  }
   else if(count==6){
       scene->clear();
       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle = scene->addRect(190, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle2 = scene->addRect(-100, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       rectangle3 = scene->addRect(-390, 100, 80, 300, Blackpen);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk1 = scene->addRect(90, 330, 290, 70, Blackpen,BlueBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk2 = scene->addRect(120, 263, 230, 65, Blackpen,GreenBrush);

       ui->graphicsView->setRenderHint(QPainter::Antialiasing);
       scene->setSceneRect(-10,190,-110,50);
       disk3 = scene->addRect(-435, 340, 180, 60, Blackpen,RedBrush);

        ui->Number->setText("6");
        ui->Next->setEnabled(true);
   }
}
