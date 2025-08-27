#include<iostream>
using namespace std;

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> arr;
    vector<int> ans;
    helper(candidates,target,arr,ans,0);
    return arr;
}
void helper(vector<int>& candidates,int target,vector<vector<int>> &arr,vector<int> &ans,int i){
    if(i==candidates.size()){
        if(target==0){
            arr.push_back(ans);
        }
        return;
    }
    if(candidates[i]<=target){
        ans.push_back(candidates[i]);
        helper(candidates,target-candidates[i],arr,ans,i);
        ans.pop_back();
    }
        helper(candidates,target,arr,ans,i+1);
}