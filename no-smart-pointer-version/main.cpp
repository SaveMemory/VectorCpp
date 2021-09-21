#include <stdio.h>
#include "vector.h"
#include "vector.cpp"

int main() {
    Vector<int> vector;

    vector.push(1);
    vector.push(1);
    
    int t = vector.getSize();

    cout << t << endl;
}