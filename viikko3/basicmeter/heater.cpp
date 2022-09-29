#include "heater.h"
#include <iostream>
using namespace std;

heater::heater()
{
    cout << "heater constructor" << endl;
}
void heater::heat(float power){
     cout << "heater heats with power of "<< power << endl;
}
