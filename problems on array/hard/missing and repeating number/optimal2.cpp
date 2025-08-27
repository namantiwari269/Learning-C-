#include<iostream>

using namespace std;

vector<long long> miss_repeat(vector<int> &arr){
    long long n = arr.size();
    int xr=0;
    for(int i =0;i<n;i++){
        xr = xr^arr[i];
        xr=xr^(i+1);
    }
    int bitno=0;
    while(1){
        if(xr & (1<<bitno) !=0){
            break;
        }
        bitno++;
    }
    int zero =0;
    int one =0;
    for(int i=0;i<n;i++){
        if(arr[i] & (1<<bitno)!=0){
            one ^= arr[i];
        }
        else{
            zero ^= arr[i];
        }
        if(i+1 & (1<<bitno)!=0){
            one ^= i+1;
        }
        else{
            zero ^= i+1;
        }
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        if(arr[i]==zero) cnt++;
    }
    if(cnt==0) return{zero,one};
    else return{one , zero};
}