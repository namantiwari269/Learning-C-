#include<iostream>
#include<set>
using namespace std;

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    set<vector<int>> arr;
    vector<int> ans;
    sort(candidates.begin(),candidates.end());
    helper(candidates,target,arr,ans,0);
    vector<vector<int>> an;
    for(auto &k : arr){
        an.push_back(k);
    }
    return an;   
}
void helper(vector<int>& candidates,int target,set<vector<int>> &arr,vector<int> &ans,int i){
    if(i==candidates.size()){
        if(target==0){
            arr.insert(ans);
        }
        return;
    }
    if(candidates[i]<=target){
        ans.push_back(candidates[i]);
        helper(candidates,target-candidates[i],arr,ans,i+1);
        ans.pop_back();
    }
        helper(candidates,target,arr,ans,i+1);
}