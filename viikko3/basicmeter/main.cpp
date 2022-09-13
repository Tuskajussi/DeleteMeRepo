#include <iostream>
#include "basicmeter.h"
#include "firemeter.h"
using namespace std;

int main()
{
    BasicMeter mittari1;
    mittari1.measure();
    mittari1.showTemp();
    FireMeter jorma;
    jorma.measureAndUpdateMinMax();
    jorma.showTemp();

    cout << "ja vielä lopuksi showTemp metodilla " << endl;
    jorma.BasicMeter::showTemp();

    return 0;
}
