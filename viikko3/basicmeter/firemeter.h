#ifndef FIREMETER_H
#define FIREMETER_H
#include "basicmeter.h"

class FireMeter : public BasicMeter
{
public:
    FireMeter();
    void measureAndUpdateMinMax();
    virtual void showTemp() override;

private:
    float maxInTemp, minInTemp;
    float maxOutTemp,minOutTemp;
};

#endif // FIREMETER_H
