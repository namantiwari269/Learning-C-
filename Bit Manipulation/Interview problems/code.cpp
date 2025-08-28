#include<iostream>
using namespace std;

int minBitFlips(int start, int goal) {
    if(start==goal) return 0;
    int n = start^goal;
    int cnt =0;
    while (n!=1){
        cnt+=n%2;
        n=n/2;
    }
    cnt++;
    return cnt;
}