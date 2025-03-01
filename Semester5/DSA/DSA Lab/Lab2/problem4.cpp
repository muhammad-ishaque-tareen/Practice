// Write a member function empty in the SLList class of problem 1 that returns true if a
// sigly linked list is empty otherwise fale. Then test it (length function) in the main()
// program.

#include<iostream>
#include"List.h"
using namespace std;

int main()
{
    List myList;
    for (int i{}; i <= 10; ++i)
    {
        myList.insertAtHead(i*5);
        myList.insertAtTail(i*10);
    }

    cout<<"if 0 then  list is empty otherwise it will print 1:  "<<myList.isEmpty()<<endl;
    cout<<"Then tell the length of the list: "<<myList.length()<<endl;

    return 0;
}