#include <iostream>
#include "kerrostalo.h"
using namespace std;

int main()
{
    kerrostalo * olio = new kerrostalo;
    cout <<"Kerrostalon kokonaiskulutus on: " << olio->laskeKulutus(1) << " euroa sahkoa"<< endl;
    delete olio;
    olio = nullptr;
    return 0;
}

