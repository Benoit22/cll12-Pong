#include "pong.h"
#include "ui_pong.h"

pong::pong(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pong)
{
    ui->setupUi(this);
}

pong::~pong()
{
    delete ui;
}
