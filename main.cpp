#include <iostream>
#include "Vector.h"
#include "Vector.cpp"

using namespace std;

int main() {
    cout << "Hello, Vector!" << endl;

    unique_ptr<Vector<int>> vectorPointer(new Vector<int>());


    vectorPointer->push(1);
    vectorPointer->push(2);
    vectorPointer->push(3);
    vectorPointer->push(4);
    vectorPointer->push(5);
    vectorPointer->push(6);
    vectorPointer->push(7);

    cout << vectorPointer->pop() << endl;
    cout << vectorPointer->pop() << endl;
    cout << vectorPointer->pop() << endl;
    cout << vectorPointer->pop() << endl;
    cout << vectorPointer->pop() << endl;
    cout << vectorPointer->pop() << endl;
    cout << vectorPointer->pop() << endl;



    return 0;
}


