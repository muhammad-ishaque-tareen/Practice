// Write mergeSort(…) recursive function as studied in the lecture.
#include<iostream>
using namespace std;

void mergeSort(int * arr, int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low , mid);    // Recursive function call (left)
        mergeSort(arr, mid +1, high); // recursive function call (right)

        merge(arr, low , mid , high);
    }

}
//  Modify function, merge(..), done in the previous lab. As is required by the
// mergeSort function written in part a) above.'

int *merge(const int *List1, int low,  int mid, int high)
{
    int *arr = new int[high];
    int i{low}, j{mid}, k{};
    arr[j] = List1[j];
    while (i <= high)
    {
        if (List1[i] < arr[j])
        {
            arr[k] = List1[i];
            i++;
        }
        else if (arr[j] < List1[i])
        {
            arr[k] = arr[j];
            j++;
        }
        else
        {
            arr[k] = List1[i];
            i++;
            j++;
        }
        k++;
    }
   
    while (j < high)
    {
        arr[k] = arr[j];
        j++;
        k++;
    }
    while (i < mid)
    {
        arr[k] = List1[i];
        i++;
        k++;
    }
    
    return arr;
}

int main()
{
    int arr[] {12,7,10,4,1,13,2,9};
    mergeSort(arr, 0, 7);
    for(int i{}; i <= 7; ++i)
    {
        cout<<arr[i]<<' ';
    }

    return 0;
}