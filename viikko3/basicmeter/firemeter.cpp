#include "firemeter.h"
#include <iostream>
using namespace std;

FireMeter::FireMeter()
{
    cout << "FireMeter constructed" << endl;

    measure();

    maxInTemp = inTemp;
    minInTemp  = inTemp;

    maxOutTemp = outTemp;
    minOutTemp = outTemp;
}

void FireMeter::measureAndUpdateMinMax()
{
    measure();

    if(inTemp>maxInTemp){
        maxInTemp = inTemp;
    }
    if(inTemp<minInTemp){
        minInTemp = inTemp;
    }

    if(inTemp>maxInTemp){
        maxInTemp = inTemp;
    }
    if(inTemp<minInTemp){
        minInTemp = inTemp;
    }
}

void FireMeter::showTemp()
{
    cout << "In Temperature = "<< inTemp << endl;
    cout << "Max in Temperature = " << maxInTemp << " min in Temp =" << minInTemp << endl;
    cout << endl;
    cout << "Out Temperature = "<< outTemp << endl;
    cout << "Max out Temperature = " << maxOutTemp << " min out Temp =" << minOutTemp << endl;
    cout << endl;
}
