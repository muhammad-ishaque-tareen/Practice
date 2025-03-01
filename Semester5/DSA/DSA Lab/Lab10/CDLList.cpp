#include"CDLList.h"
#include<iostream>
using namespace std;

void CDLList::insertAtHead(int num)
{
    if(head == nullptr)
    {
        head = new CDLLNode(num);
        tail = head;
        head->prev = head;
        head->next = head;
    }
    else
    {
        CDLLNode * temp = head;
        head = new CDLLNode(num);
        temp->prev = head;
        head->next = temp;
        // temp->next = head;
        head->prev = tail;
        tail->next = head;
        
    }
}

void CDLList::insertAtTail(int num)
{
    if(tail == head && tail == NULL)
    {
        head = new CDLLNode(num);
        tail = head;
        tail->next = head;
        head->prev = tail;
    }
    else if(head == tail)
    {
        tail = new CDLLNode(num);
        head->next = tail;
        tail->prev = head;
        tail->next = head;
        head->prev = tail;
    }
    else
    {
        CDLLNode * temp = tail;
        tail = new CDLLNode(num);
        temp->next = tail;
        tail->prev = temp;
        tail->next = head;
        head->prev = tail;
    }
}

void CDLList::print() const
{
    cout<<head->data<<' ';
    CDLLNode * ptr = head->next;
    while(ptr != head)
    {
        cout<<ptr->data<<' ';
        ptr = ptr->next;
    }
    cout<<endl;
}

void CDLList::deleteHead()
{
    if(head == nullptr)
    {
        return;
    }
    // else if(head == head->next)
    // {
    //     delete head;
    //     head = nullptr;
    // }
    else
    {
        CDLLNode * ptr = head;
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        head = ptr->next;

        delete ptr;
    }
}