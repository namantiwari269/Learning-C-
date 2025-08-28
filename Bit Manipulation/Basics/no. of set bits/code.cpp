#include<iostream>
using namespace std;

int setBits(int n) {
    int cnt =0;
    while(n!=1){
        cnt += n%2;
        n/=2;
    }
    cnt++;
    return cnt;
}