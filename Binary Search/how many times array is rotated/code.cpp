#include<iostream>
using namespace std;

int findKRotation(vector<int> &nums)  {
int n = nums.size();
int high=n-1;
int low=0;
int ans= INT_MAX;
int ind=0;
while(low<=high){
    int mid = (low+high)/2;
    if(nums[low]<=nums[mid]){
        if(ans>nums[low]){
            ans= nums[low];
            ind=low;
        }
        
        low=mid+1;
    }
    else{
        if(ans>nums[mid]){
            ans= nums[mid];
            ind=mid;
        }
        high=mid-1;
    }
}
return ind;  
    }