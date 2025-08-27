#include<iostream>
using namespace std;

void mergesorted(vector<int> &nums1,int n,vector<int> &nums2,int m){
    vector<int> temp;
    int left=0;
    int right =0;
    while(left<n && right <m){
        if(nums1[left]<=nums2[right]){
            temp.push_back(nums1[left]);
            left++;
        }
        else{
            temp.push_back(nums2[right]);
            right++;
        }
    }
    while(left<n){
        temp.push_back(nums1[left]);
        left++;
    }
    while(right<m){
        temp.push_back(nums2[right]);
        right++;
    }
    for(int i=0;i<n+m;i++){
        if(i<n) nums1[i]=temp[i];
        else nums2[i-n]=temp[i];
    }
    
}