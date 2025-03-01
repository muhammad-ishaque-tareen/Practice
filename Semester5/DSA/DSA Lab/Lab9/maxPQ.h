#ifndef _MAXPQ_
#define _MAXPQ_

class maxPQ
{
    int data ;
    int size;
    int capacity;
    int * array;
    void increaseCapacity();
    public:
    maxPQ();
    void enqueue(int );
    void print();
    int max();
    void dequeue();

    ~maxPQ();
};

#endif
