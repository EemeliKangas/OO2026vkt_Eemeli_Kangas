#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->countButton,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);
    connect(ui->resetButton,&QPushButton::clicked,
            this,&MainWindow::resetHandler);
    QFont font = ui->lineEdit->font();
    font.setPointSize(16);
    ui->lineEdit->setFont(font);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    //Luetaan lineEdit
    count++;
    ui->lineEdit->setText(QString::number(count));

}

void MainWindow::resetHandler()
{
    count = 0;
    ui->lineEdit->setText(QString::number(count));
}
