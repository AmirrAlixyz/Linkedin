#include "page1.h"
#include "ui_page1.h"
#include "page2.h"

Page1::Page1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Page1)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("image: url(:/new/prefix1/p1u.png)");
    ui->label_4->setStyleSheet("image: url(:/new/prefix1/linkedinlogo.png)");
}

Page1::~Page1()
{
    delete ui;
}


void Page1::on_pushButton_4_clicked()
{
    page2 *w2 = new page2;
    this->hide();
    w2->show();
}

