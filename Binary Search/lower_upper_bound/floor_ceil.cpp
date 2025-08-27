#include<iostream>
using namespace std;
  vector<int> getFloorAndCeil(vector<int> nums, int x) {
      vector<int> ans;
      ans.push_back(floor(nums,x));
      ans.push_back(ceil(nums,x));
     return ans;
 }
   int floor(vector<int> nums, int x){
      int n = nums.size();
     int low=0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]<=x){
            ans=nums[mid];
            low=mid+1;
        }
        else high=mid-1;
    }
    return ans;  }
 int ceil(vector<int> nums, int x){
     int n = nums.size();
     int low=0;
     int high = n-1;
     int ans = n;
     while(low<=high){
         int mid = (low+high)/2;
         if(nums[mid]>=x){
            ans=nums[mid];
            high=mid-1;
        }
        else low= mid+1;
    }
    return ans; 
}