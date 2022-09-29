#ifndef HOUSECONTROLLER_H
#define HOUSECONTROLLER_H

#include <iostream>
#include "firemeter.h"
#include "heater.h"

using namespace std;

class housecontroller
{
public:
    housecontroller();
    void control(void);
    //control funktio on while luupissa ja pyörittää controlRounds kertaa ja joka kerta mitataan
    //finemeter luokan metodien avulla sisä ja ulkolämpötilaa
    //jos sisä ja ulkolämpötilan ero > threshold, niin käytetään heater luokan heat(float)
    //funktiota lämmittämiseen
private:
    //alustetaan nämä kaksi muuttujaa housecontrolelr construktorissa
    int controlRounds;
    float threshold;
    FireMeter mittari;
    heater lammitin;

};

#endif // HOUSECONTROLLER_H
