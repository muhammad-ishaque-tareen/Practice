#ifndef DLLIST
#define DLLIST

class DLList; // for declaration

class DNode
{
    int data;
    DNode * next;
    DNode * prev;
    friend class DLList;
    public:
    DNode(int value, DNode * ptrNext = nullptr, DNode * ptrPrev  = nullptr)
    {
        data = value;
        next = ptrNext;
        prev = ptrPrev;
    }
};

class DLList
{
    
    DNode * head;
    DNode * tail;
    public: 
    DLList()
    {
        head=nullptr;
        tail=nullptr;
    }
    DLList(const DLList &);
    DLList & operator=(const DLList *);
    void insertAtHead(int);
    void insertAtTail(int);
    void deleteHead();
    void deleteTail();
    void print() const;
    void deleteNode(int);
    int Length();
    bool isEmpty();
    // void printrev() const;

    ~DLList();
};
#endif