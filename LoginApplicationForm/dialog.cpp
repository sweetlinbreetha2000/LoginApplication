#include "dialog.h"
#include "ui_dialog.h"
#include<QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_2_clicked()
{
     QApplication::quit();
}

void Dialog::on_pushButton_3_clicked()
{
    QString email=ui->lineEdit->text();
           QString pwd=ui->lineEdit_2->text();
           QString confirmpwd=ui->lineEdit_3->text();
           qDebug()<<"Email :"<<email;
           qDebug()<<"Password :"<<pwd;
           qDebug()<<"Confirm Password :"<<confirmpwd;
           if(!email.isEmpty()&&!pwd.isEmpty()&&!confirmpwd.isEmpty())
           {

           }
           else
           {
               qDebug()<<"One field is empty";

           }
}
