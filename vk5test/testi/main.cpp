#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    int i = 3;

    int & aliasIille = i;

    aliasIille = 6;

    int * ptr = &i;
    *ptr =7;

    return 0;
}
