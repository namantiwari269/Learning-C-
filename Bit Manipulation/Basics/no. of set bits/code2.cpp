#include<iostream>
using namespace std;

int hammingWeight(int n) {
    long long cnt =0;
    while(true){
        if(n==0) return cnt;
        n = (n&n-1);
        cnt++;
    }   
}