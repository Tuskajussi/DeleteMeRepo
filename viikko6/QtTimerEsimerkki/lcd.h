#ifndef LCD_H
#define LCD_H

#include <QObject>
#include <QDebug>
#include <iostream>
using namespace std;

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
