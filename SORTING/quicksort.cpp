#include<iostream>
using namespace std;

void quicksort(int arr[], int start, int end);
int partition(int arr[], int start, int end);

int main()
{
    int arr[] = {9,8,7,5,6,4,3,5,1,0};

    quicksort(arr, 0, 9);

    cout<<"Sorted array: "<<endl;
    for(int i = 0; i < 9; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}

void quicksort(int arr[], int start, int end) 
{

    if(start >= end) return;

    int pivot = partition(arr, start, end);
    quicksort(arr, start, pivot-1);
    quicksort(arr, pivot, end);

}

int partition(int arr[], int start, int end) 
{
    int position = start;

    for(int i = start; i <= end; i++) 
    {
        if(arr[i] <= arr[end]) 
        {
            swap(arr[i], arr[position]);
            position++;
        }
    }

    return position-1;
}