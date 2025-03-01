//Problem1:
//Write Singly Linked List class, as discussed in Theory Lecture, so that the following
//main() program works correctly.
#include<iostream>
#include"List.h"
using namespace std;

int main()
{
  List intSLL;
  for (int i{1}; i <= 10; ++i)
  {
    intSLL.insertAtHead(i*5);
    intSLL.insertAtTail(i*10);
  }
  intSLL.print();
  cout<<endl;
  for (int i{1}; i <= 5; ++i)
   {
    intSLL.deleteHead();
    intSLL.deleteTail();
   }
  intSLL.print();
  cout<<endl;

  return 0;
}