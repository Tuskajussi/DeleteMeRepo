#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "katutaso luotu" << endl;
}
Katutaso::~Katutaso(){
    delete as1;
    as1 = nullptr;
    delete as2;
    as2 = nullptr;
}

void Katutaso::maaritaAsunnot()
{
    as1 = new asunto();
    as1->maarita(2, 100);
    as2 = new asunto();
    as2->maarita(2, 100);

    cout << "katutaso määritetty" << endl;
}

double Katutaso::laskeKulutus(double price)
{
    return as1->laskeKulutus(price) + as2->laskeKulutus(price);
}
