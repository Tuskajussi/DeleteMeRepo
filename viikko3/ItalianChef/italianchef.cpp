#include "italianchef.h"

italianchef::italianchef(string givenName, int flourAmount, int waterAmount) : chef(givenName)
{
    name = givenName;
    jauhot = flourAmount;
    vesi = waterAmount;
}

string italianchef::getName()
{
    return name;
}

void italianchef::makePasta(int flour, int water)
{
    cout << "aimma " << name << " and meeeiking paasta heree" << endl;
    cout << name << " uses " << flour << " of flour and " << water << " of water" << endl;
}
void italianchef::makeSecretPasta(){
    cout << "Ok I give you epic pastarecipe... " << name << " makes pasta using " << jauhot << " of flour and " << vesi << " of water" << endl;
}
