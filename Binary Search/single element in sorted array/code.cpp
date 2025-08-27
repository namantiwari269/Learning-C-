#include<iostream>
using namespace std;

    int singleNonDuplicate(vector<int>& nums) {
        int low=1;
        int n = nums.size();
        int high=n-2;
        if(n==1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        while(low<=high){
            int mid = (low+high)/2;
            if(mid%2==0){
                if(nums[mid]==nums[mid+1]) low = mid+1;
                else if(nums[mid-1]==nums[mid]) high = mid-1;
                else return nums[mid];
            }
            else{
                if(nums[mid]==nums[mid+1]) high=mid-1;
                else if(nums[mid-1]==nums[mid]) low=mid+1;
                else return nums[mid];

            }
        }
        return -1;
    }