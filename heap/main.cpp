#include <iostream>
#include "lib/min_heap.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    int a = 4;
    int b = 2;
    swap2(&a, &b);
    cout << a << endl;

    // Min heap
    MinHeap h(11);
    h.insertKey(3);
    h.insertKey(2);
    h.deleteKey(1);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);

    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.decreaseKey(2, 1);
    cout << h.getMin();

    return 0;
}