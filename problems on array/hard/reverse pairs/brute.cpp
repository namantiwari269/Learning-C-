#include<iostream>
using namespace std;

int rev_pair(vector<int> &arr){
    int n = arr.size();
    int cnt =0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>2*arr[j]){
                cnt++;
            }
        }
    }
    return cnt;
}