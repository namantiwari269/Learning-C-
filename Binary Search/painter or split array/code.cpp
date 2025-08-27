#include<iostream>
#include<numeric>
using namespace std;

int findPages(vector<int> &arr, int k) {
    if(k>arr.size()) return -1;
    int low= *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    int ans=0;
    while(low<=high){
        int mid = low + (high - low)/2;
        int cnt = Count_stu(arr,mid);
        if(cnt>k){
            low=mid+1;}
        else{
            ans=mid;
            high = mid-1;
        }
        
    }
  return ans;
}
int Count_stu(vector<int> &arr,int max){
    int st=1;
    int page=0;
    for(int i=0;i<arr.size();i++){
        if(page+arr[i]<=max){
            page+=arr[i];
        }
        else{
            st++;
            page=arr[i];
        }
    }
    return st;
}