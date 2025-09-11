#include<iostream>
#include<map>
using namespace std;

int subarraysWithKDistinct(vector<int>& nums, int k) {
    return less_than(nums,k)-less_than(nums,k-1);
}
int less_than(vector<int>& nums, int k){
    map<int,int> mpp;
    int n = nums.size();
    int r=0;
    int cnt =0;
    int l=0;
    while(r<n){
        mpp[nums[r]]++;
        while(mpp.size()>k){
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0) mpp.erase(nums[l]);
            l++;
        }
        cnt+=r-l+1;
        r++;
    }
    return cnt;
}