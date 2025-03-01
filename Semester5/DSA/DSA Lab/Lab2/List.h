#ifndef _LIST_
#define _LIST_

class List;

class Node
{
    int data;
    Node * next;     // recursive(self_refrential)
    friend class List;
    public:
    //Node() = default;
    Node(int value, Node * ptr = nullptr) 
    {
        data = value;
        next = ptr;
    }
};

class List
{
    
    Node * head;
    Node * tail;
    public: 
     List();
    // {
    // head=nullptr;
    // tail=nullptr;
    // }
    void deleteHead();
    void deleteTail();
    void insertAtHead(int);
    void insertAtTail(int);
    void print() const;
    void deleteNode(int);
    int length();
    bool isEmpty();
    bool find(int);
    ~List();
};
#endif