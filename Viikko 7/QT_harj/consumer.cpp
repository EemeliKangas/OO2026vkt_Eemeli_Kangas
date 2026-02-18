#include "consumer.h"
#include <QDebug>
Consumer::Consumer(QObject *p)
    : QObject{p}
{
    qDebug()<<"Consumer konstruktori";
}

Consumer::~Consumer()
{
    qDebug()<<"Consumer tuhoaja";
}
void Consumer::handleProducerSignal()
{
qDebug()<<"Handle ProducerSignal";
    emit stopProgram();
}
