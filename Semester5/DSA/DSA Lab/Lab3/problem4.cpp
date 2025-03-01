// Write a member function empty in the DLList class of problem 1 that returns true if
// the linked list is empty otherwise false. Then test it (empty function) in the main()
// program.
#include <iostream>
#include "DLList.h"
using namespace std;

int main()
{
    DLList intDLL;
    for (int i{1}; i <= 10; ++i)
    {
        intDLL.insertAtHead(i * 5);
        intDLL.insertAtTail(i * 10);
    }
    cout<<"checking that list is empty: "<<intDLL.isEmpty();
}