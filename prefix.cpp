#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void subarrayCheck(vector<int>& nums, int n);

int main()
{
    int n;
    
    cout<<"Enter the value for n: ";
    cin>>n;

    vector<int>nums(n);

    cout<<"Enter the values for the array: "<<endl;
    for(int i = 0; i < n; i++) {
        cin>>nums[i];
    }

    subarrayCheck(nums, n);

    return 0;
}

void subarrayCheck(vector<int>& nums, int n) 
{
    int totalsum = 0;
    
    for(int i = 0; i < n; i++) {
        totalsum += nums[i];
    }

    int prefix = 0;

    for(int i = 0; i < n-1; i++) {
        prefix += nums[i];
        
        if(prefix == (totalsum - prefix)) {
            cout<<"2 EQUAL SUB ARRAY FOUND "<<endl<<"SUM = "<<prefix<<endl<<"WITH INDEX FROM "<<endl<<"Array 1 = 0 to "<<i<<endl<<"Array 2 = "<<i+1<<" to "<<n<<endl;
            return;
        }
    }

    cout<<"No equal subarrays found!"<<endl;
}