#include<iostream>
using namespace std;

int main() {
    
    int n = 5;
    int arr[n] = {3,2,14,1,4};

    cout<<"BEFORE SORTING : ";
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    for(int i = n-1; i>=0; i--) {
        for(int j = n-1; j>=i+1; j--) {
            if(arr[j] < arr[i]) {
                swap(arr[j],arr[i]);
            }
        }
    }

    cout<<"\nAFTER SORTING : ";
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}