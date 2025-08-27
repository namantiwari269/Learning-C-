#include<iostream>
using namespace std;
vector<long long> printrow(long long r){
    int ans =1;
    vector<long long> a;
    a.push_back(1);
    cout<<ans<<" ";
    for(int i=1;i<r;i++){
        ans *= r-i;
        ans/=i;
        a.push_back(ans);
    }
    return a;

}
vector<vector<long long>> print_pascal(int n){
    vector<vector<long long>> ans;
    for(int row =1;row<=n;row++){
        ans.push_back(printrow(row));
    }
    return ans;
}


int main(){
    long long r;
    cin>>r;
}