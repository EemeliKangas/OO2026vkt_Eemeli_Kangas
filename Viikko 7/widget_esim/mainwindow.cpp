#include "mainwindow.h"
#include "mainwindow.ui"

mainwindow::mainwindow(QWidget *parent)
    :QMainWindow(parent), ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    connect(ui->Nappi, &QPushButton::clicked, this, &mainwindow::handleClick)
}

mainwindow::~mainwndown()
{
    delete ui;
}

void mainwindow::handleClick()
{

}
