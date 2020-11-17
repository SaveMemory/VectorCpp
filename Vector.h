#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

using namespace std;

template<typename T>
class Vector {
public:
    Vector();
//    ~Vector();
//    int getSize(T test);
//    int getCapacity();
//    bool isEmpty();
//    T at(int index);
    void push(T element);
//    void pop(T element);

private:
    T *arrayPointer;
    const int initialCapacity = 2;
    int capacity = initialCapacity;
    int size = 0;

//    void enlarge();
//    void shrink();
};

#endif //VECTOR_VECTOR_H

