#include<iostream>
#include"List.h"
using namespace std;

List::List()
{
    head = nullptr;
    tail = nullptr;
}
void List::insertAtHead(int num)
{
    if(head == nullptr)
    {
        head = new Node(num);
        tail = head;
    }
    else 
    {
        Node * Nptr = head;
        head = new Node(num);
        head->next = Nptr;

    }
}
void List::insertAtTail(int num)
{
    if(head == tail)
    {
        if(head)
        {
            tail = new Node(num);
            head->next = tail;
        }
        else
        {
            tail = new Node(num);
            head = tail;
        }
    }
    else
    {
        Node * temp = head->next;
        while(temp != tail)
        {
            temp = temp->next;
        }
        tail = new Node(num);
        temp->next = tail;
    }

}
void List::print() const
{
    Node * ptr = head;
    while(ptr != tail)
    {
        cout<<ptr->data<<' ';
        ptr = ptr->next;
    }
    cout<<ptr->data;
}

void List:: deleteHead()
{
    if(head)
    {
        Node * ptr = head;
        head = head->next;
        delete ptr;
    }
    else
    throw "head is null";
}
void List::deleteTail()
{
    if(head == tail)
    {
        if(tail)
        {
            delete tail;
            head = tail = nullptr;
        }
    }
    else
    {
        Node * prev = head;
        Node * ptr = head->next;
        while(ptr != tail)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        delete tail;
        prev->next = nullptr;
        tail=prev;
    }
}

void List::deleteNode(int key)
{
    if(head)
    {
        if(head->data == key)
        {
            Node * ptr = head;
            head = head->next;
            delete ptr;
        }
        else
        {
            Node * prev = head;
            Node * ptr = head->next;
            while(ptr != tail)
            {
                //prev = ptr;
                if(ptr->data == key)
                {
                    prev->next = ptr->next;
                    delete ptr;
                    ptr = nullptr;
                }
                else
                {
                    prev = ptr;
                    ptr = ptr->next;
                }
            }
            if(tail->data==key)
            {
                prev->next = nullptr;
                delete tail;
                tail = prev;
            }
        }
    }
    else cout<<"Not any list is present there"<<endl;
}

int List::length()
{
    Node * temp = head;
    int counter{0};
    while(temp)
    {
        ++counter;
        temp = temp->next; 
    }
    return counter;
}
bool List::isEmpty()
{
    return (head);
}
bool List::find(int value)
{
    Node * ptr = head;
    while(ptr)
    {
        if(ptr->data == value)
        {
            return true;
        }
        else ptr = ptr->next;
    }
    return false;
}
List::~List()
{
    //  int i{1};
    while(head != nullptr)
    {
        // cout<<i++<<' ';
        Node * ptr = head;
        head = head->next;
        delete ptr;
    }
}