#include<iostream>
using namespace std;



void set_mat_zero(vector<vector<int>>& arr,int n,int m){
    vector<int> row(n, 0); 
    vector<int> col(m, 0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(row[i]==1||col[j]==1){
                arr[i][j]=0;
            }
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
    set_mat_zero(arr,n,m);
}