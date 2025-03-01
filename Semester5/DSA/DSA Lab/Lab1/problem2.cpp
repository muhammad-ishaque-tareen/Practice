#include<iostream>
using namespace std;

// struct Fraction
// {
//     int num;
//     int den;
// };

// void print(const Fraction * obj)
// {
//     obj->num<<'/'<<obj->den<<'\n';
// }

// void print(const Fraction * obj, int size)
// {
//     //print(obj);
//     for(int i{}; i < size-1; ++i)
//     {
//         print(obj++);
//     }
// }
struct Fraction
{
    int num;
    int den;
};
void print(const Fraction * obj);
void print(const Fraction * obj, int size);
int main()
{
    Fraction f1 = {10,15};
    print(&f1);
    Fraction obj[5] = {{5,2},{2,10}, {4,1}, {1,5},{8,10}};
    print(obj, 5);

    return 0;
}
// struct Fraction
// {
//     int num;
//     int den;
// };

void print(const Fraction * obj)
{
   cout<<obj->num<<'/'<<obj->den<<'\n';
}

void print(const Fraction * obj, int size)
{
    //print(obj);
    for(int i{}; i < size; ++i)
    {
        print(obj+ i);
    }
}