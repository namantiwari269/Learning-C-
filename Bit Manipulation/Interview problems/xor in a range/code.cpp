#include<iostream>
using namespace std;

int findXOR(int l, int r) {
    return (xoro(l-1)^xoro(r));
}
int xoro(int n){
    if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else if(n%4==3) return 0;
    else return n;
}