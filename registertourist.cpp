#include "registertourist.h"
#include "ui_registertourist.h"

Registertourist::Registertourist(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Registertourist)
{
    ui->setupUi(this);
}

Registertourist::~Registertourist()
{
    delete ui;
}
