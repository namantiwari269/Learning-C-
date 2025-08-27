#include<iostream>
using namespace std;

    bool search(vector<int>& nums, int target) {
        int low=0;
        int n = nums.size();
        int high = n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]==nums[high] && nums[mid]==nums[low]){
                low++;
                high--;
                continue;
            }

            //left sorted
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && nums[mid]>=target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[mid]<=target && nums[high]>=target){
                    low=mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return false;
    }