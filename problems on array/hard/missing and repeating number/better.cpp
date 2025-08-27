#include<iostream>

using namespace std;

vector<int> miss_repeat(vector<int> &arr){
    int n = arr.size();
    int missing=-1;
    int repeat = -1;
    vector<int> hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int j=1;j<=n;j++){
        if(hash[j]==2){
            repeat=j;

        }
        else if(hash[j]==0){
            missing=j;
        }
        if(missing!=-1 && repeat!=-1){
            break;
        }
    }

    return {repeat,missing};
}