#include<iostream>
using namespace std;

int smallestDivisor(vector<int>& nums, int threshold) {
    int n = nums.size();
    int low=1;
    int high = *max_element(nums.begin(),nums.end());
    int ans=0;
    while(low<=high){
        int mid= low +(high-low)/2;
        long long sum = check_total(nums,mid);
        if(sum<=threshold){
            ans= mid;
            high = mid -1;

        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
long long check_total(vector<int> &nums,int n){
    long long sum=0;
    for(int i=0;i<nums.size();i++){
        sum+= (nums[i]+n-1)/n;
    }
    return sum;
}