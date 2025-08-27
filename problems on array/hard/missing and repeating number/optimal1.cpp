#include<iostream>

using namespace std;

vector<long long> miss_repeat(vector<int> &arr){
    long long n = arr.size();
    long long missing=-1;
    long long repeat = -1;
    long long s=0;
    long long sn=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    sn= n *(n+1)/2;
    long long eq1 = s-sn;
    long long s1=0;
    long long sn1=0;
    for(int i=0;i<n;i++){
        s1+=arr[i]*arr[i];
    }
    sn1=(n*(n+1)*(2*n+1))/6;
    long long eq2= s1-sn1;
    eq2= eq2/eq1;
    repeat = (eq1+eq2)/2;
    missing= eq2-repeat;

    return {repeat,missing};
}