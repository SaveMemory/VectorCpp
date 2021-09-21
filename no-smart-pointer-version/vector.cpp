#include <iostream>
#include "vector.h"

using namespace std;

template <typename T>
Vector<T>::Vector() {
}

template<typename T>
void Vector<T>::push(T item) {
    if(size == 0) {
        mainPointer = &item;
        size++;
        return;
    }

    (mainPointer+=size) = &item;
    size++;
}

template<typename T>
int Vector<T>::getSize() {
    return size;
}