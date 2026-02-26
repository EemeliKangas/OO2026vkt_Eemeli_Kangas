#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    QTimer * pQTimer;
    void updateProgressBar();
    void setGameInfoText(QString, short);

private slots:
    void handleSwitch();
    void handleStopStart();
    void handleTimer();

public slots:
    void timeout();
};
#endif // MAINWINDOW_H
