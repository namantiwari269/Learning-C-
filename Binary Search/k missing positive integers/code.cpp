#include<iostream>
#include<map>
using namespace std;

    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        map<int,int> x;
        int low= 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int missing = arr[mid]-(mid+1);
            if(missing<k) low=mid+1;
            else{
                high = mid-1;
            }
        } 
        return low+k;

    }