#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int n;
    cout<<"Enter the numbers of elements to add : ";
    cin>>n;

    for(int i = 0; i < n; i++) {
        cout<<"Enter value for "<<i+1<<": ";
        cin>>arr[i];
    }

    for(int i = 0; i < n-1; i++) {
        int index = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[index] > arr[j]) {
                index = j;
            }
        }

        swap(arr[index], arr[i]);
    }

    cout<<"Sorted array : "<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }

    return 0;
}