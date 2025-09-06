#include<iostream>
using namespace std;

int celebrity(vector<vector<int>>& mat) {
    int n = mat.size();
    vector<int> knowme(n,0);
    vector<int> iknow(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1){
                knowme[j]++;
                iknow[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(knowme[i]==n && iknow[i]==1){
            return i;
        }
    }
    return -1;
}