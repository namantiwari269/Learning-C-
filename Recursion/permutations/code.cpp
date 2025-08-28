#include<iostream>
using namespace std;

void helper(vector<int> &nums,vector<vector<int>> & ans, vector<int> hash,vector<int> &ds){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(hash[i]!=0){
            ds.push_back(nums[i]);
            hash[i]=1;
            helper(nums,ans,hash,ds);
            hash[i]=0;
            ds.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int> &nums){
    vector<vector<int>> ans;
    vector<int> ds;
    vector<int> hash(nums.size(),0);
    helper(nums,ans,hash,ds);
}