#include<iostream>
using namespace std;

int aggressiveCows(vector<int> &nums, int k) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int low =1;
    int high = nums[n-1]-nums[0];
    int ans=0;
    while(low<=high){
        int mid = low + (high-low)/2;
        bool can = can_place(nums,mid,k);
        if(can==true){
            ans= mid;
            low=mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;

}
bool can_place(vector<int> &nums, int dist ,int k){
    int cows=1;
    int last = nums[0];
    for(int i =1;i<nums.size();i++){
        if(nums[i]-last >= dist){
            cows++;
            last=nums[i];
        }
        if(cows==k) return true;
    }
    return false;
}
