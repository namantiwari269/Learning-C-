#include<iostream>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    int n = nums.size();
    long long xoro=0;
    for(int i=0;i<n;i++){
        xoro^=nums[i];
    }      
    xoro = (xoro & (xoro-1)) ^ xoro;
    long long xor1=0;
    long long xor2=0;
    for(int i=0;i<n;i++){
        if((nums[i]&xoro)==0){
            xor1^=nums[i];
        }
        else{
            xor2^=nums[i];
        }
    }
    return {(int)xor1,(int)xor2};
}