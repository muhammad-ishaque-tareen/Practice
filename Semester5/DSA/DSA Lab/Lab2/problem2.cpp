// Write a member function deletNode in the SLList class of problem 1 that accepts a
// key and deletes it, the node containing the key, from the list if the key is present in
// the list. Then test it (deleteNode function) in the main() program.

#include<iostream>
#include"List.h"
using namespace std;

int main()
{
    List myList;
    for (int i{1}; i <= 10; ++i)
    {
        myList.insertAtHead(i*5);
        myList.insertAtTail(i*10);
    }
    myList.print();
    cout<<endl;
    int key;
    cout<<"Enter the key, if it is present in List we delete it: ";
    cin>>key;
    myList.deleteNode(key);
    myList.print();
    cout<<endl;

    return 0;
}
