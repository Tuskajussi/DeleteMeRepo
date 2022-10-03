#include "asunto.h"

asunto::asunto()
{
    cout << "asunto luotu"<<endl;
}

asunto::~asunto()
{
    cout << "asunto destruktori" << endl;
}

void asunto::maarita(int a, int n){ // a
    asukasMaara = a;
    neliot = n;
    cout << "asunto maaritetty" << endl;
}

double asunto::laskeKulutus(double price){
    return asukasMaara * neliot * price;
}
