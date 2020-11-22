#include <iostream>
#include "Vector.h"
#include "Vector.cpp"

using namespace std;

int main() {
    cout << "Hello, Vector!" << endl;

    auto *vector = new Vector<int>();

    vector->push(1);
    vector->push(2);
    vector->push(3);
    vector->push(4);
    vector->push(5);

    cout<<vector->getSize()<<endl;
    cout<<vector->getCapacity()<<endl;

    cout<<vector->pop()<<endl;
    cout<<vector->pop()<<endl;
    cout<<vector->pop()<<endl;
    cout<<vector->pop()<<endl;
    cout<<vector->pop()<<endl;

    vector->~Vector<int>();

    return 0;
}


