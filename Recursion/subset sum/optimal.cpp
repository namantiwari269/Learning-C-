#include<iostream>
using namespace std;

vector<int> subsetSums(vector<int>& arr) {
    vector<int> ans;
    helper(arr,ans,0,0);
    sort(ans.begin(),ans.end());
    return ans;
}
void helper(vector<int> &arr, vector<int> &ans,int sum,int ind){
    if(ind>arr.size()-1){
        ans.push_back(sum);
        return;
    }
    helper(arr,ans,sum+arr[ind],ind+1);
    helper(arr,ans,sum,ind+1);
}