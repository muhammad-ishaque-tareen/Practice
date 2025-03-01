#include<iostream>
using namespace std;

// Write partition(…) function which partitions the array passed to it as studied in the
// lecture.
int partition(int * arr, int low, int high)
{
    int pivot{arr[high]};
    int j{low}, i{j-1};
    for(; j< high; ++j)
    {
        if(arr[j] <= pivot)
        {
            i = i+1;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[j]);
    for(int k{}; k <= high; ++k)
    {
        cout<<arr[k]<<' ';
    }
    return i+1;
}

void swap(int val1, int val2)
{
    int temp{val1};
    val1 = val2;
    val2 = temp;
}

int main()
{
    int arr[] {5,13,20, -99, 4, 11};
    int index{partition(arr,0, 5)};
    cout<<'\n'<<"Pivot index is: "<<index;

    return 0;
}