#include<iostream>
using namespace std;

int count_inversion(vector<int> &arr){
    int n = arr.size();
    int cnt;
    cnt =merge_sort(arr,0,n-1);
    return cnt;
}

int merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int cnt =0;
    int left = low;
    int right = mid + 1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        //right is smaller
        else{
            temp.emplace_back(arr[right]);
            cnt += (mid - left+1);
            right++;
        }
    }
    while(left<=mid){
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.emplace_back(arr[right]);
        right++;
    }
    for(int i =low ;i<=high;i++ ){
        arr[i]= temp[i-low];
    }
    return cnt;
}
int merge_sort(vector<int> &arr, int low , int high){
    if(low>=high) return;
    int cnt =0;
    int mid= (low + high)/2;
    cnt+=merge_sort(arr, low,mid);
    cnt+=merge_sort(arr, mid+1,high);
    cnt+=merge(arr,low,mid,high);
    
}