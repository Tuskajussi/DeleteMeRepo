#ifndef LAMPOTILASENSORI_H
#define LAMPOTILASENSORI_H

#include <QObject>
#include <QDebug>

class lampotilasensori : public QObject
{
    Q_OBJECT
public:
    explicit lampotilasensori(QObject *parent = nullptr);
    virtual ~lampotilasensori();

public slots:
    void readTemperatureSlot();

signals:
    void temperatureSignal(float);

private:
    float temperature;
};

#endif // LAMPOTILASENSORI_H
