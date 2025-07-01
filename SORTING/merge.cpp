#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) 
{
    int tempArray[end-start+1];

    int left = start, right = mid + 1;
    int index = 0;

    while (left <= mid && right <=end) {
        if(arr[left] <= arr[right]) 
        {
            tempArray[index] = arr[left];
            index++, left++;
        }

        else 
        {
            tempArray[index] = arr[right];
            index++, right++;
        }
    }

    while (left <= mid) {
        tempArray[index] = arr[left];
        index++, left++;
    }

    while(right <= end) {
        tempArray[index] = arr[right];
        index++, right++;
    }

    index= 0;
    while(start <= end) {
        arr[start] = tempArray[index];
        start++, index++;
    }
}

void mergeSort(int arr[], int start, int end) {
    if (start == end) {
        return;
    }
    
    int mid = start + (end-start)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main ()
{
    int arr[] = {6,7,4,3,8,0,1,2,2,5};
    mergeSort(arr, 0, 9);

    for(int i = 0; i < 10; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}