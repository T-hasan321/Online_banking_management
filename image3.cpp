#include "image3.h"
#include "ui_image3.h"

image3::image3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::image3)
{
    ui->setupUi(this);
}

image3::~image3()
{
    delete ui;
}
