#include "producer.h"
#include <QDebug>
Producer::Producer(QObject * p) :QObject(p)
{
    qDebug()<<"Producer konstruktori";
    pQTimer = new QTimer(this);
    //connect(lähettäjänOsoite, LähettäjänLuokasSignaalinOsoite, Vastaanottaja, vastaanottajaLuokanSlotFunktionOsoite)
    connect(pQTimer,&QTimer::timeout, this, &Producer::handleTimeout);
    pQTimer -> start(1000);
}

Producer::~Producer()
{
    qDebug()<<"Producer tuhottu";
}

void Producer::handleTimeout()
{
    qDebug()<<"Handle Timeout";
    emit signalToConsumer();
    qDebug()<<"Signal to Consumer";

}

