#include<stdio.h>

void insertionSort(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        int j = i;
        while(j>0 && arr[j-1]>arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;  

            j--;
        }
    }
} 

void main() {
    int n = 6;
    int arr[6] = {6,5,4,3,2,1};

    insertionSort(arr,n);

    printf("After sorting : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}