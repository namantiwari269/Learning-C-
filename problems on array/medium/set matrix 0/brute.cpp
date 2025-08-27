#include<iostream>
using namespace std;

void col_ch(vector<vector<int>>& arr,int j,int element,int n ){
    for(int i=0;i<n;i++){
        if(arr[i][j]==0)continue;
        arr[i][j]=element;
    }
}
void row_ch(vector<vector<int>>& arr,int i,int element,int m ){
    for(int j=0;j<m;i++){
        if(arr[i][j]==0)continue;
        arr[i][j]=element;
    }
}


void set_mat_zero(vector<vector<int>>& arr,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                
                col_ch(arr,j,-1,n);
                row_ch(arr,i,-1,m);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==-1){
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