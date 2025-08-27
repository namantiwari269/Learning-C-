#include<iostream>

using namespace std;

vector<int> miss_repeat(vector<int> &arr){
    int n = arr.size();
    int missing=-1;
    int repeat = -1;
    for(int i=1;i<n;i++){
        int cnt=0;
        for(int j =0;j<n;j++){
            if(arr[j]==i){
                cnt++;
            }
        }
        if(cnt==2){
            repeat=i;
        }
        else if(cnt==0){
            missing=i;
        }
        if(repeat!=-1 && missing!=-1){
            break;
        }
    }
    return {repeat,missing};
}