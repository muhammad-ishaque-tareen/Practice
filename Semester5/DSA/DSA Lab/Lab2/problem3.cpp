//Write a member function length in the SLList class of problem 1 to count the number
//of nodes in a sigly linked list. Then test it (length function) in the main() program.

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
    cout<<"The number of nodes in linked list are: "<<myList.length();

    return 0;
}