#include<iostream>
using namespace std;

int numSubarraysWithSum(vector<int>& nums, int goal) {

    return lessthan(nums,goal)-lessthan(nums,goal-1);
}
int lessthan(vector<int>& nums, int goal){
    if(goal<0)return 0;
    int n = nums.size();
    int l =0;
    int r=0;
    int sum =0;
    int cnt=0;
    while(r<n){
        sum+=nums[r];

        while(sum>goal){
            sum-=nums[l];
            l++;
        }
        cnt+= r-l+1;
        r++;
    }
    return cnt;
}