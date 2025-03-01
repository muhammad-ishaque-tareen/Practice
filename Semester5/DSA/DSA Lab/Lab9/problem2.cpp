#include<iostream>
#include"maxPQ.h"
using namespace std;

int main()
{
    maxPQ pq1;
    for(int i{}; i < 12; ++i)
    {
        pq1.enqueue(i);
    }
    pq1.enqueue(18);
    pq1.print();
    cout<<pq1.max()<<endl;
    pq1.dequeue();
    pq1.print();

    return 0;

}