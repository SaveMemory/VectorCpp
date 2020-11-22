#include <iostream>
#include "Vector.h"

using namespace std;

template <typename T>
Vector<T>::Vector() {
    arrayPointer = new T[capacity];
}

template <typename T>
Vector<T>::~Vector<T>() {
    delete[] arrayPointer;
}

template <typename T>
void Vector<T>::push(T element) {
    if(size == capacity)
    {
        enlarge();
    }

    *(arrayPointer + size++) = element;
}

template <typename T>
T Vector<T>::pop() {
    T returnElement = *(arrayPointer + size - 1);
    *(arrayPointer + (size - 1)) = NULL;
    size--;
    if(size == (capacity/4)){
        shrink();
    }

    return returnElement;
}

template <typename T>
int Vector<T>::getSize() {
    return size;
}

template <typename T>
int Vector<T>::getCapacity() {
    return capacity;
}

template <typename T>
void Vector<T>::enlarge() {

    capacity *= 2;
    T* enlargedArray = new T[capacity];

    for (int i = 0; i < size; ++i) {
        enlargedArray[i] = *(arrayPointer + i);
    }

    arrayPointer = enlargedArray;
}

template <typename T>
void Vector<T>::shrink() {
    capacity /= 2;
    T *newArray = new T[capacity];

    for (int i = 0; i < size; ++i) {
        *(newArray + i) = *(arrayPointer + i);
    }

    arrayPointer = newArray;
}

// this will possibly be useful when creating at method
//template <typename T>
//void Vector<T>::pop(T element) {
//
//    bool isFound = false;
//
//    for (int i = 0; i < size; ++i) {
//
//        if (isFound) {
//            *(arrayPointer + i-1) = *(arrayPointer + i);
//            *(arrayPointer + i) = nullptr;
//        }
//
//        if (equal_to<T>(*(arrayPointer + i) == element && !isFound)) {
//            *(arrayPointer + i) = nullptr;
//            isFound = true;
//        }
//    }
//}