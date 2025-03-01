#include<iostream>
#include"maxPQ.h"
using namespace std;

int main()
{
    maxPQ pq1;
    for(int i{}; i < 13; ++i)
    {
        pq1.enqueue(i);
    }
    // pq1.enqueue(10);
    // pq1.enqueue(15);
    pq1.print();
    

    return 0;
}