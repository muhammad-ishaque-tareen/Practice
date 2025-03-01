#include<iostream>
#include<limits.h>
using namespace std;


// int binarySearch(const int * arr, int start, int end, int key)
// { 
//     if(start >  end ) return -1;
//     int mid{(start+end)/2};
//     if(arr[mid] < key)
//     binarySearch(arr, start,mid-1, key);
//     else if(arr[mid]> key)
//     binarySearch(arr,mid+1, end, key);
//     else 
//     return mid;
// }


int main()
{
    int end{INT_MAX};
    int start{};
    int mid{start + (end - start)/2};
    cout<<"fisrt time mid value is: "<<mid<<endl;
    start= mid;
    mid = start + (end - start)/2;
    cout<<"Second time mid value is: "<<mid;
    // int arr[] {50,45,40,35,30,25,20,15};
    // int index = binarySearch(arr, 0, 7,40);
    // cout<<index;
    return 0;
}