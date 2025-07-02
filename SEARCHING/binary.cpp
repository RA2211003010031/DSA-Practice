#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n-1;

    while(start <= end) 
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == target)
        {
            cout<<"Value found at index = "<<mid;
            return 0;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int target;

    cout<<"Enter the value to search: ";
    cin>>target;

    if(binarySearch(arr, n, target) == -1) {
        cout<<"NOT FOUND";
    }
    
    else 

    return 0;
}