#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

using namespace std;

template<typename T>
class Vector {
public:
    Vector();
    void push(T item);
    int getSize();
private:
    int size = 0;
    T* mainPointer = new T;
};

#endif //VECTOR_VECTOR_H