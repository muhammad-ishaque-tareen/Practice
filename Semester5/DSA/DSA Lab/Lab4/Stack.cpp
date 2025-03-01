#include<iostream>
#include"Stack.h"
using namespace std;

Stack::Stack()
{
    capacity = 10;
    _top = -1;
    array = new int[capacity];
}
bool Stack:: isStackFull()
{
    if(_top == capacity -1)
    {
        return true;
    }
    return false;
}
bool Stack:: isStackEmpty()
{
    if(_top==-1){
        return true;
    }
    return false;
}
 void Stack::push(int val)
 {
    if(!isStackFull())
    {
        // if(top == -1)
        array[++_top] == val;
        // else
        // top +=1;
        // array[top] = val;
    }
    else
    throw "Stack is full";
 }

 int Stack::top()
 {
    // int temp{-1};
    if(isStackEmpty())
    {
        return _top;
    }
    else
    {
        return  array[_top];
    }

 }
 
 void Stack::pop()
 {
    if(!isStackEmpty())
    {
        //int temp = array[top];
        _top -= 1;
        //  temp;
    }
    else
    {
        throw "Stack is empty";
    }
 }

 Stack::~Stack()
 {
    delete [] array;
    array = nullptr;
 }