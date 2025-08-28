#include<iostream>
using namespace std;

int singleNumber(vector<int>& nums) {
    int xora=0;
    int n = nums.size();
    for(int i =0;i<n;i++){
        xora ^= nums[i];
    } 
    return xora;    
}