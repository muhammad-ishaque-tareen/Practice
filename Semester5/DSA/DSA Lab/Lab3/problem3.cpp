// Write a member function length in the DLList class of problem 1 to count the number
// of nodes in the linked list. Then test it (length function) in the main() program.


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
    intDLL.print();
    cout<<"The number of nodes in the list are:  "<<intDLL.Length();
    // cout << "Enter the number you want to delete from the node: ";
    // cin >> number;
    // intDLL.deleteNode(40);
    // intDLL.print();

    return 0;
}
