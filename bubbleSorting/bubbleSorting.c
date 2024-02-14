#include<stdio.h>

void bubbleSort(int arr[], int n) {
    for(int i = n-1; i>=1; i--) {
        for(int j = 0; j<n-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    } 
} 

void main() {
    int n = 5;
    int arr[5] = {2,1,4,5,3};

    bubbleSort(arr,n);

    printf("After sorting : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}