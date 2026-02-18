#ifndef PRODUCER_H
#define PRODUCER_H
#include <QObject>
#include <QTimer>
class Producer: public QObject
{
    Q_OBJECT
public:
    Producer(QObject * parent = nullptr);
    ~Producer();
private:
    QTimer * pQTimer;

signals:
    void signalToConsumer();
private slots:
    void handleTimeout();
};

#endif // PRODUCER_H
