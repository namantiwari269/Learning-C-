#include<iostream>
using namespace std;
    int count_occur(vector<int>& nums, int target) {
    int a = first(nums,target);
    if(a==-1) return -1;
    int b = last(nums,target);
    return b-a+1;
    }
    int first(vector<int>& nums, int x){
        int low=0;
        int n = nums.size();
        int high = n-1;
        int ans =-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==x){
                ans = mid;
                high = mid -1;
            }
            else if(nums[mid]>x){
                high = mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return ans;
    }
    int last(vector<int>& nums, int x){
        int low=0;
        int n = nums.size();
        int high = n-1;
        int ans =-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==x){
                ans = mid;
                low=mid+1;
            }
            else if(nums[mid]>x){
                high = mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return ans;
    }