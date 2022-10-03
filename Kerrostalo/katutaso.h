#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"

class Katutaso : Kerros
{
public:
    Katutaso();
    virtual ~Katutaso();
    asunto * as1;
    asunto * as2;
    virtual void maaritaAsunnot() override;
    double laskeKulutus(double);
};

#endif // KATUTASO_H
