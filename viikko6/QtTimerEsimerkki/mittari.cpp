#include "mittari.h"


mittari::mittari(QObject *parent ) : QObject(parent)
{
    qDebug()<< "mittarin konstruktori";
    plampotilasensori = new lampotilasensori(this);
    connect(this, SIGNAL(readTemperatureSignal()), plampotilasensori, SLOT(readTemperatureSlot()));
}

mittari::~mittari()
{
    qDebug()<< "mittarin destructori";
    delete plampotilasensori;
}

void mittari::beginSlot()
{
    qDebug()<< "slot begins for mittari";
    //plampotilasensori->readTemperatureSlot();
    emit readTemperatureSignal();
}

void mittari::temperatureSlot(float)
{

}

void mittari::printOkSlot()
{

}
