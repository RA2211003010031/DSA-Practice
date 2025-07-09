#include<iostream>
using namespace std;

int main() {
    int row;
    int col;
    cout<<"Enter row : ";
    cin>>row;
    cout<<"Enter col : ";
    cin>>col;

    int arr[row][col];

    cout<<"Enter the values of array : ";
    for(int i = 0;  i < row; i++) {
        for(int j = 0;  j < col; j++) {
            cin>>arr[i][j];
        }
    }

    int k;
    cout<<"Enter the value to search for in the array : ";
    cin>>k;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == k) {
                cout<<"Found the value";
                return 0;
            }
        }
    }

    cout<<"Value not found"<<endl;
    
    return 0;
}