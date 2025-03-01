#ifndef _STACK_
#define _STACK_

class Stack
{
    int capacity;
    int _top;
    int * array;
    public:
    bool isStackFull();
    bool isStackEmpty();
    // public:
    Stack();
    void push(int);
    int top();
    void pop();
    ~Stack();
};
#endif