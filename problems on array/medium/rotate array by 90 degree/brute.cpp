#include<iostream>
using namespace std;



void rotate_matrix(vector<vector<int>>& arr,int n,int m){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[j][n-i-1]=arr[i][j];
        }
    }
    
}

int main(){
    int n;
    cout<<"enter number of elements\n";
    cin>> n;
    int m;
    cout<<"enter number of elements";
    cin>> m;
    vector<vector<int>> arr;
    for(int i =0; i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j];
    }
    }
    int ans;
    rotate_matrix(arr,n,m);
}