#include <iostream>
#include "Vector.h"

using namespace std;

template <typename T>
Vector<T>::Vector() {
    arrayPointer.reset(new T[capacity]);
}


template <typename T>
void Vector<T>::push(T item) {
    if(size == capacity)
        enlarge();

    arrayPointer.get()[size] = item;
    size++;
}

template <typename T>
T Vector<T>::pop() {

    if (isEmpty())
        throw out_of_range("Array is empty");

    if(size == capacity/4)
        shrink();

    auto item = arrayPointer[size - 1];

    arrayPointer.get()[size - 1] = NULL;
    size--;

    return item;
}

template <typename T>
int Vector<T>::getCapacity() {
    return capacity;
}

template <typename T>
int Vector<T>::getSize() {
    return size;
}

template <typename T>
bool Vector<T>::isEmpty() {
    return size == 0;
}

template <typename T>
T Vector<T>::at(int index) {
    return arrayPointer.get()[index];
}

template <typename T>
void Vector<T>::deleteItem(int index) {
    arrayPointer.get()[size - 1] = NULL;

    for (int i = size; i < capacity; ++i) {
        arrayPointer.get()[i-1] = arrayPointer.get()[i];
    }
}


template <typename T>
void Vector<T>::enlarge() {
    capacity *= 2;
    resetArray();
}

template <typename T>
void Vector<T>::shrink() {
    capacity /= 2;
    resetArray();
}

template <typename T>
void Vector<T>::resetArray() {

    auto newArray = new T[capacity]();

    for (int i = 0; i < size; ++i) {
        newArray[i] = arrayPointer.get()[i];
    }

    arrayPointer.reset(newArray);
}
