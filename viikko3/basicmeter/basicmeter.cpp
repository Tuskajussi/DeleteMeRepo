#include "basicmeter.h"
#include <iostream>
using namespace std;

BasicMeter::BasicMeter()
{
    cout << "Basicmeter constructed" << endl;
}
BasicMeter::~BasicMeter()
{
     cout << "Basicmeter destructed" << endl;
}

void BasicMeter::measure()
{
    cout << "measuring" << endl;
    srand(time(0));
    inTemp = (rand() % 10) + 10;
    outTemp = (rand() % 10) - 10;
}

void BasicMeter::showTemp(){
     cout << " in Temperature is = " << inTemp << endl;
     cout << "out Temperature is = " << outTemp << endl;
}
