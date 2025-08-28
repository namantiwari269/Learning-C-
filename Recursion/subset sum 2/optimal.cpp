#include<iostream>
using namespace std;

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    vector<int> arr;
    vector<int> ds;

    helper(nums,ans,arr,ds,0);
    return ans;
}
void helper(vector<int>& nums,vector<vector<int>> &ans, vector<int> &arr,vector<int>&ds, int ind){
    ans.push_back(ds);
    for(int i=ind;i<nums.size();i++){
        if(i>ind && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        helper(nums,ans,arr,ds,i+1);
        ds.pop_back();
    }
}