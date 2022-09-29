#include "myclass.h"

myclass::myclass()
{
    cout << "myclass constructor"<< endl;
    cout << "I start at address = " << this << endl;
}

myclass::~myclass(){
    cout << "myclass destructor" << endl;
}

int myclass::sum(int a, int b){
    int foo = 1;
    int bar = 2;
    int result = foo + bar + a + b;

    cout << "parameter a memory address = "<< &a<<endl;
    cout << "parameter b memory address = "<< &a<<endl;
    cout << "foo memory address = "<< &foo<<endl;
    cout << "bar memory address = "<< &bar<<endl;
    cout << "result memory address = "<< &result<<endl;
    return result;
}


