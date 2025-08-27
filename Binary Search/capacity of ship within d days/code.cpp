#include<iostream>
#include <numeric>
using namespace std;
int shipWithinDays(vector<int>& weights, int days) {
    int low=*max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    int ans=0;
    while(low<=high){
        int mid = low + (high-low)/2;
        int d = day_calc(weights,mid);
        if(d<=days){
            high= mid-1;
            ans= mid;}
        else if(d>days){
            low=mid+1;
        }

    }
    return ans;
    
}
int day_calc(vector<int>& weights,int cap){
    int sum=0;
    int d=1;
    for(int i=0;i<weights.size();i++){
        sum += weights[i];
        if(sum>cap){
            d++;
            sum = weights[i];
        }
    }
    return d;
}