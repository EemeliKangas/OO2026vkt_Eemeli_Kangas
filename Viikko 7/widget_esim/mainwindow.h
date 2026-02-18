#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
namespace Ui  {
class mainwindow
}
class mainwindow : public QMainWindow
{
    Q_OBJECT
public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwndown();
private slots:
    void handleClick();
private:
    Ui::mainwindow *ui;
};

#endif // MAINWINDOW_H
