// Write a member function deletNode in the DLList class of problem 1 that accepts a
// key and deletes it, the node containing the key, from the list if the key is present in
// the list. Then test it (deleteNode function) in the main() program.

#include <iostream>
#include "DLList.h"
using namespace std;

int main()
{
    DLList intDLL;
    int number{};
    for (int i{1}; i <= 10; ++i)
    {
        intDLL.insertAtHead(i * 5);
        intDLL.insertAtTail(i * 10);
    }

    intDLL.print();
    // cout<<"The number of nodes in the list before deleting are:  "<<intDLL.Length();
    cout << "Enter the number you want to delete from the node: ";
    cin >> number;
    intDLL.deleteNode(40);
    intDLL.print();

    return 0;
}
