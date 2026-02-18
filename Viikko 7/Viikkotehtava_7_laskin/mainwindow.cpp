#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->B0,&QPushButton::clicked,
            this,[this](){handleNumber(ui->B0);});

    connect(ui->B1,&QPushButton::clicked,
            this,[this](){handleNumber(ui->B1);});

    connect(ui->B2,&QPushButton::clicked,
            this,[this](){handleNumber(ui->B2);});

    connect(ui->B3,&QPushButton::clicked,
            this,[this](){handleNumber(ui->B3);});

    connect(ui->B4,&QPushButton::clicked,
            this,[this](){handleNumber(ui->B4);});

    connect(ui->B5,&QPushButton::clicked,
            this,[this](){handleNumber(ui->B5);});

    connect(ui->B6,&QPushButton::clicked,
            this,[this](){handleNumber(ui->B6);});

    connect(ui->B7,&QPushButton::clicked,
            this,[this](){handleNumber(ui->B7);});

    connect(ui->B8,&QPushButton::clicked,
            this,[this](){handleNumber(ui->B8);});

    connect(ui->B9,&QPushButton::clicked,
            this,[this](){handleNumber(ui->B9);});

    connect(ui->clear,&QPushButton::clicked,
            this, &MainWindow::handleClear );

    connect(enter->enter,&QPushButton::clicked,
            this, &MainWindow::handleEnter );
    connect(enter->mul,&QPushButton::clicked,
            this, &MainWindow::handleEnter );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleNumber(QPushButton *ptr)
{
    if(state == 0)
    {
        QString luku = ui->number1->text();
        luku = luku + ptr->text();
        ui->number1->setText(luku);
    }
    else
    {
        QString luku = ui->number2->text();
        luku = luku + ptr->text();
        ui->number2->setText(luku);
    }
}

void MainWindow::handleOperator()
{

}

void MainWindow::handleClear()
{
    ui->number1->setText("");
    ui->number2->setText("");
    ui->result->setText("");
    state=0;
}

void MainWindow::handleEnter()
{

}
