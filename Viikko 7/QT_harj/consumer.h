#ifndef CONSUMER_H
#define CONSUMER_H

#include <QObject>


class Consumer : public QObject
{
    Q_OBJECT
public:
 Consumer(QObject *parent = nullptr);
~Consumer();

signals:
void stopProgram();

public slots:
    // jos signaali tulee ulkoa, voidaan käyttää funktiona
    void handleProducerSignal();
private slots:
    //jos signaali tulee luokan sisältä
};

#endif // CONSUMER_H
