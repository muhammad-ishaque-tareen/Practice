#include<iostream>
using namespace std;
void initialize_table( int *, int );
int fib(int num);
int main()
{
    int n;
    cout<<"Enter the value of N :";
    cin>>n;
    cout<<endl;
    cout<<"Fibonaci num is "<<fib(n)<<endl;
    return 0;

}
int fib(int num)
{
    int* table = new int [num+1];
    initialize_table(table, num+1);
    table[0]=0;
    table[1]=1;
    for(int i=2; i<=num; i++)
    {
        table[i]=table[i-1]+table[i-2];
    }
    int result=table[num];
    delete[]table;
    return result;
}
void initialize_table(int *table, int _n)
{
    for(int j{}; j<_n; j++)
    {
        table[j]=-1;
    }
}