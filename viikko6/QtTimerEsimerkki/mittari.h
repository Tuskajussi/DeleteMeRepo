#ifndef MITTARI_H
#define MITTARI_H

#include <QObject>
#include <QDebug>
#include "lampotilasensori.h"
class mittari : public QObject
{
    Q_OBJECT
public:
    explicit mittari(QObject *parent = nullptr);
    virtual ~mittari();
private:

signals:
    void readTemperatureSignal();
    void printSignal(float);
    void finished();
public slots:
    void beginSlot();
    void temperatureSlot(float);
    void printOkSlot();
private:
    float temperature;
    lampotilasensori *plampotilasensori;
};

#endif // MITTARI_H
