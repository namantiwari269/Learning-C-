#include<iostream>
using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    int max_cnt=-1;
    int ind = -1;
    int n = mat.size();
    int m = mat[0].size();
    for(int i=0;i<n;i++){
        int cnt_row=lowerbound(mat[i],m,1);// can use upper_bound(0) or first_occur(1)
        if(cnt_row==m){
            cnt_row=0;
        }
        else{
            cnt_row=m-cnt_row;
        }
        if(cnt_row>max_cnt){
            max_cnt=cnt_row;
            ind=i;
        }
    }
    return {ind,max_cnt};
}
int lowerbound(vector<int> &arr,int n , int x){
    int low=0;
    int high = n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}