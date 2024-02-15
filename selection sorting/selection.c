#include<stdio.h>

void selectionSort(int arr[], int n) {
    for(int i = 0 ;i<n; i++) {
        int minimumVal = i;
        for(int j = i; j<n; j++) {
            if(arr[j]<arr[minimumVal]) {
                int temp = arr[j];
                arr[j] = arr[minimumVal];
                arr[minimumVal] = temp;
            }
        }
    }
}

int main() {

    int n = 5;
    int arr[5] = {2,5,1,4,3};

    selectionSort(arr,n);

    printf("Sorted array : \n");

    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    } 

    return 0;
}