#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGraphicsScene>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_Next_clicked();

    void on_Reset_clicked();

    void on_Number_clicked();

    void on_Back_clicked();

private:
    Ui::Dialog *ui;
    QGraphicsScene* scene;
    QGraphicsRectItem* rectangle, *rectangle2,*rectangle3,*disk1,*disk2,*disk3;
    int count=0;
};
#endif // DIALOG_H
