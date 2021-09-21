#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H
#include <memory>

using namespace std;

template<typename T>
class Vector {
public:
    Vector();

    void push(T item);
    T pop();
    int getCapacity();
    int getSize();
    bool isEmpty();
    T at(int index);
    void deleteItem(int index);
private:
    shared_ptr<T[]> arrayPointer;
    const int initialCapacity = 1;
    int capacity = initialCapacity;
    int size = 0;

    void enlarge();
    void shrink();
    void resetArray();
};

#endif //VECTOR_VECTOR_H

