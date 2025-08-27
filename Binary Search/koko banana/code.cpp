#include<iostream>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();
    int low=1;
    int high = *max_element(piles.begin(),piles.end());
    int ans=INT_MAX;
    while(low<=high){
        int mid= low +(high-low)/2;
        long long hour = check_hour(piles,mid);
        if(hour<=h){
            ans= mid;
            high = mid -1;

        }
        else{
            low=mid+1;
        }
    }
    return ans;
        
}
long long check_hour(vector<int> &piles,int n){
    long long sum=0;
    for(int i=0;i<piles.size();i++){
        sum+= (piles[i]+n-1)/n;
    }
    return sum;
}