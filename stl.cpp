#include<bits/stdc++.h>

using namespace std;

int main() {

    // algorithms - containers - functions - iterators

    pair<int,int> p = {2,3};
    cout<<p.first<<endl<<p.second<<endl;

    // understanding vectors
    vector <int> v1;
    v1.push_back(1);
    v1.emplace_back(5);

    vector<int>v(5,100);
    // 5 instances of 100 are created automatically.

    vector<int>v2(v1);
    // coping v1 contents directly to v2

    cout<<v[0]<<endl;

    return 0;
}