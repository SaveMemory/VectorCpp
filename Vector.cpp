#include <iostream>
#include "Vector.h"

using namespace std;

template <typename T>
Vector<T>::Vector() {
    T array[initialCapacity];
    arrayPointer = array;
}

template <typename T>
void Vector<T>::push(T element) {
    *(arrayPointer + size++) = element;
}