#include<iostream>
using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    int max_cnt=-1;
    int ind = -1;
    int n = mat.size();
    int m = mat[0].size();
    for(int i=0;i<n;i++){
        int cnt_row=0;
        for(int j=0;j<m;j++){
            cnt_row += mat[i][j];
        }
        if(cnt_row>max_cnt){
            max_cnt=cnt_row;
            ind=i;
        }
    }
    return {ind,max_cnt};
}