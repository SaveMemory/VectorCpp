#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

using namespace std;

template<typename T>
class Vector {
public:
    Vector();
    ~Vector();
    int getSize();
    int getCapacity();
//    bool isEmpty();
//    T at(int index);
    void push(T element);
    T pop();

private:
    T *arrayPointer;
    const int initialCapacity = 1;
    int capacity = initialCapacity;
    int size = 0;

    void enlarge();
    void shrink();
};

#endif //VECTOR_VECTOR_H

