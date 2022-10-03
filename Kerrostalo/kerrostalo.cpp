#include "kerrostalo.h"

kerrostalo::kerrostalo()
{
    ekaptr = new Katutaso();
    ekaptr->maaritaAsunnot();
    tokaptr = new Kerros();
    tokaptr->maaritaAsunnot();
    kolmasptr = new Kerros();
    kolmasptr->maaritaAsunnot();
    cout << "kerrostalo luotu" << endl;


    //cout << "Talo construktori" << endl;
    /*
    asuntoPinosta.maarita(2, 100);
*/
    //asunto_ptr = new asunto();
    //asunto_ptr->maarita(2,200);
    //cout << "kulutus on " << asunto_ptr->laskeKulutus(1) << endl;

}

kerrostalo::~kerrostalo(){
    //delete asunto_ptr;
    //asunto_ptr = nullptr;
    delete ekaptr;
    ekaptr = nullptr;
    delete tokaptr;
    ekaptr = nullptr;
    delete kolmasptr;
    ekaptr = nullptr;

    cout << "Talo destruktori kuittaa" << endl;
}

double kerrostalo::laskeKulutus(double price)
{
    return ekaptr->laskeKulutus(price) + tokaptr->laskeKulututus(price) + kolmasptr->laskeKulututus(price);
}
