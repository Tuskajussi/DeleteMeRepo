#include "housecontroller.h"

housecontroller::housecontroller()//:controlRounds(5), threshold(8);
{
    controlRounds = 5;
    threshold = 10;
}

void housecontroller::control()
{
    while(controlRounds>0){
        controlRounds--;
        mittari.measure();
        if(mittari.getInputTemp() - mittari.getOutTemp() > threshold){
            lammitin.heat(2.3);
        }
    }
}

