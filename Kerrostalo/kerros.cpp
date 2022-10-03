#include "kerros.h"

Kerros::Kerros()
{
    cout << "kerros luotu" << endl;
}
Kerros::~Kerros(){
    delete as1;
    as1 = nullptr;
    delete as2;
    as2 = nullptr;
    delete as3;
    as3 = nullptr;
    delete as4;
    as4 = nullptr;
}

void Kerros::maaritaAsunnot()
{
    as1 = new asunto();
    as1->maarita(2, 100);
    as2 = new asunto();
    as2->maarita(2, 100);
    as3 = new asunto();
    as3->maarita(2, 100);
    as4 = new asunto();
    as4->maarita(2, 100);

    cout << "kerros määritetty" << endl;
}

double Kerros::laskeKulututus(double price)
{
    return as1->laskeKulutus(price) + as2->laskeKulutus(price) + as3->laskeKulutus(price) + as4->laskeKulutus(price);
}
