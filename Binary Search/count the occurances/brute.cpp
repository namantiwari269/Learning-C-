#include<iostream>
using namespace std;

int count_occur(vector<int>& nums, int target) {
    int first =-1;
    int last =-1;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            if(first==-1) first =i;
            last=i;
        }
    }
    return last-first+1;
}