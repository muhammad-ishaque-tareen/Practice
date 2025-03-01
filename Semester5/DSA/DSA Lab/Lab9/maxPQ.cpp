#include<iostream>
#include"maxPQ.h"
using namespace std;

maxPQ::maxPQ()
{
    data = 0;
    size = 0;
    capacity = 13;
    array = new int[capacity];
}

void maxPQ::enqueue(int key)
{
    // if(size == capacity)
    // {
    //     increaseCapacity();
    // }
    array[++size] = key;
    int i{size};
    int value{0};
    while(i > 1)
    {
        if(key > array[i/2])
        {
            
            value = array[i / 2];
            array[i/2] = key;
            array[i] = value;   
        }
        else
        {
            break;
        }
        i = i / 2;
    }
    array[i] = key;
}

// void maxPQ::increaseCapacity()
// {
//     int * temp = new int[capacity];
//     temp.capacity = capacity * 2;
//     for(int i{}; i < capacity; i++ )
//     {
//         temp.
//     }
// }

void maxPQ::print()
{
    for(int i{1}; i <= size; ++i)
    {
        cout<<array[i]<<' ';
    }
    cout<<endl;
}

void maxPQ::dequeue()
{
    // int temp{array[1]};
    array[1] = array[size];
    size -= 1;
    if(array[1] > array[2] && array[1] > array[3])
    {
        exit(1);
    }
    else 
    {
        int i{1};
        while(i < size)
        {
            if(array[i] < array[i*2])
            {
                int temp = array[i];
                array[i] = array[i*2];
                array[i*2] = temp;
            }
            else
            {
                int temp = array[i];
                array[i] = array[i * 2 +1];
                array[i*2+1] = temp;
            }
            i *= 2;
        }
    } 
}


int maxPQ::max()
{
    return array[1];
}

maxPQ::~maxPQ()
{
    delete [] array;
}