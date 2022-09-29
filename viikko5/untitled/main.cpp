#include <iostream>

using namespace std;
#include "myclass.h"

int main()
{

    myclass olio;

    myclass * ptr = new myclass;

    cout<<"ptr is from stack at address = " <<&ptr<<endl;

    cout << ptr->sum(1,2)<< endl;
    cout << olio.sum(3,4)<<endl;

    delete ptr;
    return 0;
}
