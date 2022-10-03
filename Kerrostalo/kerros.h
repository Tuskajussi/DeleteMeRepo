#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Kerros();
    virtual ~Kerros();

    asunto * as1;
    asunto * as2;
    asunto * as3;
    asunto * as4;

    virtual void maaritaAsunnot();
    double laskeKulututus(double);
};

#endif // KERROS_H
