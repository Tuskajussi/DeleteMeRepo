#include "lampotilasensori.h"

lampotilasensori::lampotilasensori(QObject *parent ) : QObject(parent)
{
    qDebug()<< "lampotilasensorin konstruktori";
}

lampotilasensori::~lampotilasensori()
{
    qDebug()<< "lampotilasensorin destruktori";
}

void lampotilasensori::readTemperatureSlot()
{
    qDebug()<< "lampotilasensori vastaanotti kaskyn lukea lampotila";
    temperature = 9.4;

}
