#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    vector<vector<int>>arr(4, vector<int> (4, 0));

    arr[0] = {3,6,4,2};
    arr[1] = {7,8,11,5};
    arr[2] = {9,3,2,1};
    arr[3] = {17,8,5,9};

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"Printing the wave form"<<endl;

    for(int j = 0; j < 4; j++) {
        if(j % 2==0) {
            for(int i = 0; i < 4; i++) {
                cout<<arr[i][j]<<" ";
            }
        }
        else {
            for(int i = 3; i >=0; i--) {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}