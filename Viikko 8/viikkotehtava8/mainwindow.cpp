#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pQTimer = new QTimer(this);
    pQTimer->setInterval(1000); //alustetaan QTimer sekunnin intervallilla

    player1Time = 0;
    player2Time = 0;
    currentPlayer = 0;

    connect(ui->min,&QPushButton::clicked, //buttons
            this,[this](){handleTimer();});

    connect(ui->sec,&QPushButton::clicked,
            this,[this](){handleTimer();});

    connect(ui->start,&QPushButton::clicked,
            this,[this](){handleStopStart();});

    connect(ui->stop,&QPushButton::clicked,
            this,[this](){handleStopStart();});

    connect(ui->switch1,&QPushButton::clicked,
            this,[this](){handleSwitch();});

    connect(ui->switch2,&QPushButton::clicked,
            this,[this](){handleSwitch();});

    connect(pQTimer, &QTimer::timeout, this, &MainWindow::timeout); //timer

    setGameInfoText("Valitse aika ja paina start", 15);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    if (currentPlayer == 1 && player1Time > 0)
        player1Time--;
    else if (currentPlayer == 2 && player2Time > 0)
        player2Time--;

    updateProgressBar();

    if (player1Time == 0 && currentPlayer == 1)
    {
        pQTimer->stop();
        setGameInfoText("Pelaaja 2 voitti!", 20);
    }
    else if (player2Time == 0 && currentPlayer == 2)
    {
        pQTimer->stop();
        setGameInfoText("Pelaaja 1 voitti!", 20);
    }
}

void MainWindow::updateProgressBar()
{
    ui->pbar1->setValue(player1Time);
    ui->pbar2->setValue(player2Time);
}

void MainWindow::setGameInfoText(QString text, short font)
{
    ui->label->setText(text);

    QFont koko = ui->label->font();
    koko.setPointSize(font);
    ui->label->setFont(koko);
}

void MainWindow::handleSwitch()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button == ui->switch1)
        currentPlayer = 2;
    else if (button == ui->switch2)
        currentPlayer = 1;
}

void MainWindow::handleStopStart()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button == ui->start)
    {
        if (!pQTimer->isActive())
        {
            if (currentPlayer == 0)
                currentPlayer = 1;

            pQTimer->start();
            setGameInfoText("Peli kaynnissa", 12);
        }
    }
    else if (button == ui->stop)
    {
        if (player1Time == 0 || player2Time == 0)
        {
            pQTimer->stop();
            player1Time = 0;
            player2Time = 0;currentPlayer = 0;
            setGameInfoText("Valitse aika ja paina start", 15);
        }
        else
        {
            pQTimer->stop();
            setGameInfoText("Peli pysäytetty", 12);
        }
    }
}

void MainWindow::handleTimer()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button == ui->min)
    {
        player1Time = 300;
        player2Time = 300;

        ui->pbar1->setMaximum(300);
        ui->pbar2->setMaximum(300);
        setGameInfoText("Valmiina pelattavaksi", 12);
    }
    else if(button == ui->sec)
    {
        player1Time = 120;
        player2Time = 120;

        ui->pbar1->setMaximum(120);
        ui->pbar2->setMaximum(120);
        setGameInfoText("Valmiina pelattavaksi", 12);
    }
    updateProgressBar();
}
