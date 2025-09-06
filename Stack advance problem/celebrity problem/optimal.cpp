#include<iostream>
using namespace std;
int celebrity(vector<vector<int>>& mat) {
    int n = mat.size();
    int top=0;
    int bottom=n-1;
    while(top<bottom){
        if(mat[top][bottom]==1){
            top++;
        }
        else if(mat[bottom][top]){
            bottom--;
        }
        else{
            top++;
            bottom--;
        }
    }
    if(top!= bottom) return -1;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum1+=mat[top][i];
        sum2+= mat[i][top];
    }
    if(sum1==1 && sum2==n) return top;
    return -1;
}