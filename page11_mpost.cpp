#include "page11_mpost.h"
#include "ui_page11_mpost.h"

page11_Mpost::page11_Mpost(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page11_Mpost)
{
    ui->setupUi(this);
}

page11_Mpost::~page11_Mpost()
{
    delete ui;
}
