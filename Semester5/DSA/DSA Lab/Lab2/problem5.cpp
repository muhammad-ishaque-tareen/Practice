//Write a member function find in the SLList class of problem 1 that accepts a value
//and returns true if the value is present in the singly linked list otherwise fale. Then
//test it (length function) in the main() program.

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
    myList.print();
    cout<<endl;
    int key{};
    cout<<"Enter the key: ";
    cin>>key;
    cout<<"if it print 1 the key is available in list else key is not in list: "<<myList.find(key)<<endl;

    return 0;
}