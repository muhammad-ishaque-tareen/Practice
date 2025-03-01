#include <iostream>
using namespace std;

int *merge(const int *, int, const int *, int);

int main()
{
    int size1{7}, size2{6};
    int newSize = size1 + size2;
    int arr1[size1]{2,5,8,12,45,67};
    int arr2[size2]{1,11,21,31,35,44,53};

    int *ptr = merge(arr1, size1, arr2, size2);

    for (int i{0}; i < newSize ; ++i)
    {
        cout << ptr[i] << ' ';
    }

    delete ptr;

    return 0;
}

int *merge(const int *List1, int L1_size, const int *List2, int L2_size)
{
    int *arr = new int[L1_size + L2_size];
    int i{}, j{}, k{};
    while (i < L1_size && j < L2_size)
    {
        if (List1[i] < List2[j])
        {
            arr[k] = List1[i];
            i++;
        }
        else if (List2[j] < List1[i])
        {
            arr[k] = List2[j];
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
    // if (i > L1_size && j > L2_size)
    // {
        
    //     return arr;
    // }
    if (i > L1_size)  
    {
        while (j < L2_size)
        {
            arr[k] = List2[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i < L1_size)
        {
            arr[k] = List1[i];
            i++;
            k++;
        }
    }
    return arr;
}