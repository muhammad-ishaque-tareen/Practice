// Write Circular Queue class, as discussed in Theory Lecture, using array so that the
// following main() program works correctly.

#include<iostream>
#include"cirQueue.h"
using namespace std;
int main()
{
    cirQueue aQueue(10);
    for (int i{1}; i <= 10; ++i)
    {
        aQueue.enqueue(i*5);            //enters elements in the queue
    }
    for (int i{1}; i <= 20; ++i)
    {
        cout<< aQueue.frontEl()<<' ';
        //aQueue.dequeue(); // removes elements from the queue
    }
}