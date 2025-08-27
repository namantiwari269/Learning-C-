#include<iostream>
using namespace std;

void swapifgreater(vector<int> &nums1,vector<int> &nums2,int left, int right){
    if(nums1[left]>nums2[right]){
        swap(nums1[left],nums2[right]);
    
    }
}

void mergesorted(vector<int> &nums1,int n,vector<int> &nums2,int m){
    int len = n+m;
    int gap = (len/2) + (len%2);
    while(gap>0){
        int left =0;
        int right = left +gap;
        while(right>len){
            if(left<n && right >n){
                swapifgreater(nums1,nums2,left,right-n);
            }
            else if(left>=n){
                swapifgreater(nums2,nums2,left-n,right-n);
                
            }
            else{
                swapifgreater(nums1,nums1,left,right);
            }
            left ++;
            right++;
            
        }
        if(gap==1) break;
        int gap = (len/2) + (len%2);

    }
}