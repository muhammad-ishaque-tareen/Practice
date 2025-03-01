#include"Stack.h"
#include<iostream>
using namespace std;

//Write Stack class, as discussed in Theory Lecture, using array so that the following
//main() program works correctly.
int main()
{
    Stack aStack;
    for(int i{}; i < 10; ++i)
    {
        aStack.push(i * 5);
    }
    for(int i{}; i < 10; ++i)
    {
        cout<<aStack.top();
        aStack.pop();
    }

    return 0;
}

// (Note: The entire Stack ADT, as discussed in the lecture shall be implemented.)