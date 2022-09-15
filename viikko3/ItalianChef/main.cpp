#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    chef jorma("Jorma Jokkinen");
    jorma.makeSalad();
    jorma.makeSoup();

    italianchef antti("Me Mario", 100, 120);
    antti.makeSalad();
    antti.makeSoup();
    antti.makePasta(100, 200);
    antti.makeSecretPasta();
    return 0;
}
