#include<iostream>
using namespace std;

int median(vector<vector<int>> &mat) {
    int low=INT_MAX;
    int high = INT_MIN;
    int n = mat.size();
    int m = mat[0].size();
    int req= n*m/2;
    for(int i=0;i<n;i++){
        low = min(low,mat[i][0]);
        high = max(high,mat[i][m-1]);
    }
    while(low<=high){
        int mid= low+ (high-low)/2;
        int sq = smaller_equal(mat,mid);
        if(sq<=req){
            low=mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}
int smaller_equal(vector<vector<int>> &mat,int mid){
    int cnt=0;
    for(int i =0;i<mat.size();i++){
        int c_r= upperbound(mat[i],mid);
        cnt+=c_r;
        
        
    }
    return cnt;
}
int upperbound(vector<int> &mat,int k){
    int low= 0;
    int high =mat.size()-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mat[mid]<=k){
            low= mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}