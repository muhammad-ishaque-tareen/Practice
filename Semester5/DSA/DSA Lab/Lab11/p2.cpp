#include<iostream>
using namespace std;

void insert(int * arr, int size, int value)
{
    arr[size++] = value;
    int i{};
    for(; i < size; ++i)
    {
        int temp = arr[i];
        for(int j{}; j < size; j++)
        {
            if(arr[j] > arr[j+1])
            {
        
            }
        }
    }
}