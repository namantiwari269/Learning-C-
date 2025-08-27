#include<iostream>
using namespace std;



vector<int> rotate_matrix(vector<vector<int>>& arr,int n,int m){
    int top =0;
    int bottom =n-1;
    int right = m-1;
    int left =0;
    vector<int> ans;
    while(top<=bottom && left<=right){
        for(int i=top ;i<=right;i++){
            ans.emplace_back(arr[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.emplace_back(arr[i][right]);
            
        }
        right--;
        if(top>bottom) break;
        for(int i=right;i>=left;i--){
            ans.emplace_back(arr[bottom][i]);
        }
        bottom--;
        if(left>right) break;
        for(int i=bottom;i>=top;i--){
            ans.emplace_back(arr[i][left]);
        }
        left++;
    }
    return ans;
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
    vector<int> ans;
    ans = rotate_matrix(arr,n,m);
}