#include<iostream>
using namespace std;

void mergesorted(vector<int> &nums1,int n,vector<int> &nums2,int m){
    vector<int> temp;
    int left=n-1;
    int right =0;
    while(left>=0 && right<m){
        if(nums1[left]>nums2[right]){
            swap(nums1[left],nums2[right]);
        }
        else{
            break;
        }
    }
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
}