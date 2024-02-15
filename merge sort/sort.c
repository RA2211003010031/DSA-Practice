#include<stdio.h>

void merge(int arr[], int low, int mid, int high) {
    int i = 0;
    int l = low;
    int h = mid + 1;
    int tempArr[high];

    while (l <= mid && h <= high) {
        if (arr[l] <= arr[h]) {
            tempArr[i++] = arr[l++];
        } else {
            tempArr[i++] = arr[h++];
        }
    }

    while (l <= mid) {
        tempArr[i++] = arr[l++];
    }

    while (h <= high) {
        tempArr[i++] = arr[h++]; 
    }

    for (i = 0; i <= high - low; i++) {
        arr[low + i] = tempArr[i];
    }
    // for (int k = 0; k < high; k++)
    // {
    //     arr[k] = tempArr[k];
    // }
    
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int n = 6;
    int arr[6] = {6, 5, 2, 3, 4, 1};

    mergeSort(arr, 0, n - 1);

    printf("After sorting:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
