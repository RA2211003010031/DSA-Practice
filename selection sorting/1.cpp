#include <iostream>

using namespace std;

int main() {

    int arr[5] = {5,4,3,2,1};

    for(int i = 0; i<5-1; i++) {
        int minIndex;
        for(int j = i; j<5; j++) {
            if(arr[i]>arr[j]) {
                minIndex = j;
            }
        }
        if(arr[i]>arr[minIndex]) {
            swap(arr[i],arr[minIndex]);
        }
    }

    cout<<"After sorting:"<<endl;
    for(int i =0 ; i<5; i++) {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}