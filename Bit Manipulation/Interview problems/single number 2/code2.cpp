#include<iostream>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ones=0;
    int twos=0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        ones = (nums[i]^ones) & (~twos);
        twos = (nums[i]^twos) & (~ones);

    }
    return ones;
}