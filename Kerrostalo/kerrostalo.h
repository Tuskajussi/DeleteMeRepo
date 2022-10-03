#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"

using namespace std;

class kerrostalo
{
public:
    kerrostalo();
    ~kerrostalo();

    double laskeKulutus(double);

private:
    Katutaso * ekaptr;
    Kerros * tokaptr;
    Kerros * kolmasptr;
};

#endif // KERROSTALO_H
