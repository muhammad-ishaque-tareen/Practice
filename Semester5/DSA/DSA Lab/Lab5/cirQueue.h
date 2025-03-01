#ifndef _CIRQUEUE_
#define _CIRQUEUE_

class cirQueue
{
    int front;
    int back;
    int * storage;
    int capacity;
    int size;
    public:
    cirQueue(int val)
    {
        size = 0;
        capacity = val;
        front = -1;
        back = -1;
        storage = new int[capacity];
    
    }
    cirQueue(const cirQueue &);
    void enqueue(int);
    int frontEl();

    ~cirQueue()
    {
        delete [] storage;
    }
};
#endif