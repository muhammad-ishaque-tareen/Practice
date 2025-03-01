//a)	Write a function(Fibonacci) that accepts a positive number and  returns 
// the corresponding Fibonacci number.
//Fibonacci Series:   1 1 2 3 5 8 13 21 34 …
//Example:  
//Parameter: 	6
//Return value:	8

//b)	Test your program by writing the main() function also.
//c)	What is the Time Complexity (?) of the function written in part a) above.
#include<iostream>
using namespace std;

int Fibonacci(int num)
{
    int lastNum1{1}, lastNum2{1}, sum{0};
    if(num <= 0)
    {
        return -1;
    }
    // else if(num ==1)
    // {
    //     return sum;
    // }
    else
    {
        for(int i{1}; i <= num; ++i)
        {
            lastNum2 = lastNum1;
            lastNum1 = sum;
            sum = lastNum1 + lastNum2;
        }
        return sum;
    }
}

int main()
{
    int number{};
    cout<<"Enter the number where u want to know fibonacchi series value: ";
    cin>>number;
    int value = Fibonacci(number);
    cout<<"The fibonacci value on given number is: "<<value;

    return 0;
}
