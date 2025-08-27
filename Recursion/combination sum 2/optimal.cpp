#include<iostream>
using namespace std;

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    sort(candidates.begin(),candidates.end());
    vector<int> arr;
    helper(candidates,target,ans,arr,0);
    return ans;

}
void helper(vector<int>& candidates,int target,vector<vector<int>> &ans,vector<int> &arr,int ind){
    if(target==0){
        ans.push_back(arr);
        return;
    }
    int n = candidates.size();
    for(int i= ind ; i<=n-1;i++){
        if(i>ind && candidates[i]==candidates[i-1]) continue;
        if(candidates[i]>target) break;
        arr.push_back(candidates[i]);
        helper(candidates,target-candidates[i],ans,arr,i+1);
        arr.pop_back();
    }
}