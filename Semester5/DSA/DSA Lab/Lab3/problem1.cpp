// Write Doubly Linked List class, as discussed in Theory Lecture, and on the same
// pattern as was done for Singly Linked List so that the following main() program
// works correctly.
#include<iostream>
#include"DLList.h"
using namespace std;

int main()
{
    DLList intDLL;
    for (int i{1}; i <= 10; ++i)
    {
        intDLL.insertAtHead(i*5);
        intDLL.insertAtTail(i*10);
    }
    intDLL.print();
    DLList int2DLL {intDLL};
    int2DLL.deleteHead();
    int2DLL.print();
    intDLL.print();
    //int2DLL = intDLL;
    //int2DLL.print();
     for (int i{1}; i <= 5; ++i)
     {
       int2DLL.deleteHead();
       //int2DLL.deleteTail();
     }
    int2DLL.print();
    return 0;
}