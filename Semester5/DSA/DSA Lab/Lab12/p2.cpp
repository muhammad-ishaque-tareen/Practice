// Write insertionSort(…) function as studied in the lecture.
#include<iostream>
using namespace std;

void insertionSort(int * arr , int size)
{
    for(int j{1}; j < size; j++)
    {
        int i{j -1}, value{arr[j]};
        while(i >= 0 && arr[i] > value)
        {
            arr[i+1] = arr[i];
            --i;
        }
        arr[i+1] = value;
    }
    for(int k{}; k < size; k++)
    {
        cout<<arr[k]<<' ';
    }
    cout<<endl;
}

int main()
{
    int size{10};
    int arr[8] {1,2,4,7,9,12,13, 8};
    
    insertionSort(arr, 8);
    return 0;
}