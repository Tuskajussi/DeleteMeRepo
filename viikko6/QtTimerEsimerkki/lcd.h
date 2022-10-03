#ifndef LCD_H
#define LCD_H

#include <QObject>
#include <QDebug>
#include <string.h>

class LCD : public QObject
{
    Q_OBJECT
public:
    explicit LCD(QObject *parent = nullptr);
    virtual ~LCD();
public slots:
    void printSlot(string);
signals:
    void printOkSignal();
};

#endif // LCD_H
