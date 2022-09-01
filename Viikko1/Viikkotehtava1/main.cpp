#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

namespace own{
    void print(string text){
        std::cout << text << endl;
    }

    void change(short* one, short* two) {  //harjoitus 2
        short storage = *one;
        *one = *two;
        *two = storage;
    }
}
using namespace own;

short randomizeFromTo(short from, short to){
    srand(time(0));
    return rand() % to + from;
}

void testValue(short value,short target){
    if(value > target){
        print("Value is too high!");
    }
    if(value < target){
        print("Value is too low!");
    }
}

short game(short maxnum){
    short value = 0;
    short target = randomizeFromTo(1, maxnum);
    short tries = 0;
    while(value != target){
        cout << "Guess a value between 1-" << maxnum << endl;
        cin >> value;
        testValue(value, target);
        tries++;
    }
    return tries;
}

void valueChanger(){
    short value1 = 0;
    short value2 = 0;
    print("Hi, please give 2 values, first give me value one:");
    cin >> value1;
    print("Thank you, please give value two now:");
    cin >> value2;

    cout << "Value 1 is now " << value1 << " and value 2 is now " << value2 << endl;
    change(&value1, &value2);
    cout << "After change program, Value 1 is now " << value1 << " and value 2 is now " << value2 << endl;
}

void assignmentChanger(short target){
    if(target == 1){
        print("Insert the maximum value for the game:");
        short maxNumber;
        cin >> maxNumber;
        short tries = game(maxNumber);
        cout << "Value is the same! You used " << tries << " tries. Thank you for your patience" << endl;
    }
    if(target == 2){
        valueChanger();
    }
}

int main()
{
    short target = 0;

    while(target != 3){
        print("Do you want to check assignment 1 or 2?");
        print("Insert 1 to check the game");
        print("Insert 2 to test value changer");
        print("Insert 3 to exit");
        cin >> target;
        assignmentChanger(target);
    }
    return 0;
}
