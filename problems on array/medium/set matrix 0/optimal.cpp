#include<iostream>
using namespace std;



void set_mat_zero(vector<vector<int>>& arr,int n,int m){
    // vector<int> row(n, 0); 
    // vector<int> col(m, 0);
    int col0=1;
        for (int i = 0; i < n; i++) {
            if (arr[i][0] == 0) col0 = 0;  // check first column

            for (int j = 1; j < m; j++) {
                if (arr[i][j] == 0) {
                    arr[i][0] = 0;  // mark row
                    arr[0][j] = 0;  // mark column
                }
            }
        }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(arr[i][j]!=0){
                if(arr[i][0]==0||arr[0][j]==0){
                    arr[i][j]=0;
                }
            }
        }
    }
    if(arr[0][0]==0){

        for(int j=0;j<m;j++){
            arr[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            arr[i][0]=0;
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