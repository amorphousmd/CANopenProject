#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include "shm_write.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btn_Go_clicked()
{
    QString inputPos = ui->editPos->text();
    ui->textBrowser->setText(inputPos);
    QMessageBox::information(this, "Change Position", "Position changed");
    main2();
}


void Dialog::on_btn_Stop_clicked()
{

}


void Dialog::on_btn_Start_clicked()
{

}


void Dialog::on_btn_Init_clicked()
{

}

