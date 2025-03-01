#ifndef _CDLLIST_
#define _CDLLIST_

class CDLList; // for declaration

class CDLLNode
{
    int data;
    CDLLNode * next;
    CDLLNode * prev;
    friend class CDLList;
    public:
    CDLLNode(int value, CDLLNode * ptrNext = nullptr, CDLLNode * ptrPrev  = nullptr)
    {
        data = value;
        next = ptrNext;
        prev = ptrPrev;
    }
};

class CDLList
{
    
    CDLLNode * head;
    CDLLNode * tail;
    public: 
    CDLList()
    {
        head=nullptr;
        tail=nullptr;
    }
    void deleteHead();
    // CDLList(const CDLList &);
    void insertAtHead(int);
    void insertAtTail(int);
    void print() const;

};

#endif