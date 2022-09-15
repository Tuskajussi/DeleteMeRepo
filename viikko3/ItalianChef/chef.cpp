#include "chef.h"
#include <iostream>
using namespace std;

chef::chef(string givenName)
{
    name = givenName;
    cout << "Chef "<< name <<" Constructor" << endl;
}

chef::~chef()
{
    cout << "Chef " << name << " Destructor" << endl;
}

void chef::makeSalad()
{
    cout << "Chef " << name << " makes macho sallad" << endl;
}

void chef::makeSoup()
{
    cout << "Chef " << name << " makes supasoup" << endl;
}
