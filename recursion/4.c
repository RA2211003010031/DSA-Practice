#include<stdio.h>

// reverse an array

void reverse(int s, int arr[], int n) {
    if(s >= n/2) 
    return;

    int temp = arr[n-s-1];
    arr[n-1-s] = arr[s];
    arr[s] = temp;
    
    reverse(s+1, arr, n);

}

void main() {

    int n = 5;
    int arr[5] = {5,4,3,2,1};

    printf("Before reversing:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    reverse(0,arr,n);

    printf("After reversing:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
}