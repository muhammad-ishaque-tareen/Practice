#include<iostream>
#include"CDLList.h"
using namespace std;

int main()
{
    CDLList intCDLL;
    for(int i{1}; i < 10; ++i)
    {
        intCDLL.insertAtHead(i * 5);
        intCDLL.insertAtTail(i * 10);
    }
    intCDLL.print();

    intCDLL.deleteHead();

    intCDLL.print();

    return 0;
}