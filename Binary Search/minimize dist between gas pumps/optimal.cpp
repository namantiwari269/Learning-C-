#include<iostream>
using namespace std;

double findSmallestMaxDist(vector<int> &arr, int k) {
    int n = arr.size();
    long double low= 0;
    long double high =0;
    for(int i =0;i<n-1;i++){
        high = max(high, (long double) (arr[i+1]-arr[i]));
    }
    long double diff=1e-6;
    while(high - low > diff){
        long double mid = (high+low)/2.0;
        int cnt = count_gs(arr,mid);
        if(cnt>k){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    return high;
}
int count_gs(vector<int> &arr, long double dist){
    int cnt=0;
    for(int i=1;i<arr.size();i++){
        int numberInBetween = (arr[i]-arr[i-1])/dist;
        if((arr[i+1]-arr[i])/dist == numberInBetween){
            numberInBetween--;
        }
        cnt+= numberInBetween;
    }
    return cnt;
}