#include"DLList.h"
#include<iostream>
using namespace std;

void DLList::insertAtHead(int num)
{
    if(head == nullptr)
    {
        head = new DNode(num);
        tail = head;
    }
    else
    {
        DNode * ptr = new DNode(num);
        ptr->next = head;
        head = ptr;
        ptr = nullptr; 
    }
}

void DLList::insertAtTail(int num)
{
    if(tail)
    {
        DNode * temp= new DNode(num);
        tail->next = temp;
        temp->prev = tail;
        tail = temp; 
    }
    else
    {
        tail = new DNode(num);
        head = tail;
    }
}

DLList::DLList(const DLList & newList)
{
    DNode * ptr = newList.head;
    DNode * tptr = nullptr;
    if(ptr)
    {
        this->head = new DNode(ptr->data);
        this->tail = head;
        tptr = this->head;
        ptr = ptr->next;
    }
    else
    {
        this->head = tail = nullptr;
    }
    for( ; ptr != nullptr; ptr = ptr->next)
    {
        DNode * tempPtr = nullptr;
        tempPtr = new DNode(ptr->data);
        tptr->next = tempPtr;
        tempPtr->prev = tptr;
        tptr =tail= tempPtr;
        
    }
}

// DLList & DLList::operator=(const DLList & newObj)
// {
//     DNode * ptr = newObj.head;

//     if(ptr)
//     {
//         head = new DNode(ptr->data);
//         DNode * tptr = head;
//         tail =  head;
//         ptr = ptr->next;
//     }
//     else{
//         head = tail = NULL;
//     }
//     while(ptr)
//     {
//         DNode * tempPtr = new Node(ptr->data);
//         tempPtr->prev = tptr;
//         tptr->next = tempPtr;
//         tail = tempPtr;
//         pr = ptr->next; 
//     }
//     return *this;
// }

 void DLList::deleteHead()
 {
    DNode * ptr = head;
    head = head->next;
    head->prev = NULL;
    delete ptr;
 }
void DLList::print() const
{
    DNode * ptr = head;
    while(ptr)
    {
        cout<<ptr->data<<' ';
        ptr = ptr->next;
    }
    cout<<endl;
}
// void DLList::printrev() const
// {
//     DNode * ptr = tail;
//     while(ptr)
//     {
//         cout<<ptr->data<<' ';
//         ptr = ptr->prev;
//     }
// }
// void DLList::deleteNode(int key)
// {
//     if(head->data == key)
//     {
//         DNode * temp = head;
//         head = head->next;
//         head->prev =NULL;
//         temp->next = NULL;
//         delete temp;
//     }
//     else
//     {
//         DNode * temp = head->next;
//         for(; temp!= nullptr; temp = temp->next)
//         {
//             if(temp->data == key)
//             {
//                 DNode * bPtr = temp->prev;
//                 DNode * fPtr = temp->next;
//                 bPtr->next = fPtr;
//                 fPtr->prev = bPtr;
//                 temp->next = nullptr;
//                 temp->prev = nullptr;
//                 delete temp;
//                 break;    
//             }
//         }
//         if(!temp)
//         {
//             cout<<"key is not present in the list. "<<endl;
//         }
//     }
// }

int DLList::Length()
{
    int count{};
    DNode * ptr = head;
    while(ptr)
    {
        count += 1;
        ptr = ptr->next;
    }
    return count;
}

bool DLList::isEmpty()
{
    if(!head)
    {
        return true;
    }
    return false;
}

DLList::~DLList()
{
    int count{};
    while(head)
    {
        DNode * ptr = head;
        head = head->next;
        delete ptr;
        count++;
    }
    cout<<count<<endl;
}