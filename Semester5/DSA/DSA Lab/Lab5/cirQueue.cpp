#include<iostream>
#include"cirQueue.h"
using namespace std;

// cirQueue::cirQueue(const cirQueue & obj)
// {
//     front = obj.front;
//     back = obj.back;
//     obj.storage = new int[back];
//     while()
// }

void cirQueue::enqueue(int val)
 {
    if(size <= capacity)
    {
        storage[++back] = val;
        back++;
        size++;
    }
    if(size == capacity)
    {
        back = size % capacity;
        storage[back] = val;
        back++;
    }
    // cout<<back;
    // else
    // {
    //     back = back % capacity;
    //     storage[back] = val;
    //     back++;
    // }
}
 
int cirQueue::frontEl()
{
    if(front != back)
    {
        return storage[++front];
    }
    else{
        front = (front+1) % 10;
        return storage[front];
    }
}