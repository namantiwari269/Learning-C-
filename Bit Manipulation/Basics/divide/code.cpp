#include<iostream>
using namespace std;

int divide(int dividend, int divisor) {
    if(dividend == divisor) return 1;
    bool sign = true;
    long q=0;
    if(dividend<0 && divisor>0) sign = false;    
    if(divisor<0 && dividend>0) sign = false;    
    long n= abs((long)dividend);
    long d= abs((long)divisor);
    while(n>=d){
        int cnt =0;
        while(n>= (d<<(cnt+1))){
            cnt++;
        }
        q+= 1<<cnt;
        n -=(d<<(cnt));
    }
    if(q==(1<<31)){
        if(sign) return INT_MAX;
        else return INT_MIN;
    }
    return sign?q:-q;
}