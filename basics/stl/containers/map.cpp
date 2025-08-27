#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,int> mpp; // unique keys in sorted order o(log n)
    map<int, pair<int, int>> mpp1;
    map< pair<int, int>,int> mpp2;

    mpp[1]=2; //{{1,2}}
    mpp.insert({3,1});
    mpp.insert({2,4});
    mpp2[{2,3}]= 1;

    for(auto it : mpp){
        cout<<it.first << " "<< it.second<<endl;
    }
    cout<<mpp[1];// gives 2
    cout<<mpp[5];//null or 0

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // multi map , multiple keys , only map[key] cannot be stored here
    // unordered map , not sorted , o(1) or worst case o(n)
    return 0;
}