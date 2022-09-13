#ifndef BASICMETER_H
#define BASICMETER_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



class BasicMeter
{
public:
    BasicMeter();
    ~BasicMeter();
    void measure();
    virtual void showTemp();

protected:
    float inTemp;
    float outTemp;

};

#endif // BASICMETER_H
