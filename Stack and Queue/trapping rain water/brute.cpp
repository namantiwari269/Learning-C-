#include<iostream>
using namespace std;

int trap(vector<int>& arr) {
    int total= 0;
    vector<int> pre= prefix_max(arr);
    vector<int> suf= suffix_max(arr);
    for (int i = 0; i < arr.size(); i++) {
        int left_max= pre[i];
        int right_max= suf[i];
        if(arr[i]<left_max && arr[i]<right_max){
            total += min(left_max,right_max)-arr[i];
        }
    }
    return total;
}
vector<int> prefix_max(vector<int>& arr){
    vector<int> pre=arr;
    for(int i=1;i<arr.size();i++){
        pre[i]=(max(arr[i],pre[i-1]));
    }
    return pre;
}
vector<int> suffix_max(vector<int>& arr){
    vector<int> suf=arr;
    for(int i=arr.size()-2;i>=0;i--){
        suf[i]= max(suf[i+1], arr[i]);
    }
    return suf;
}