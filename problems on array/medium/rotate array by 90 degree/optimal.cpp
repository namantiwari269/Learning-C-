#include<iostream>
using namespace std;



void rotate_matrix(vector<vector<int>>& arr,int n,int m){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
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