#include<iostream>

using namespace std;

void fib(int n,int n1 =0, int n2 =1){
    if(n<=1) return;
    int m = n1 + n2;
    cout<<m<<" ";
    n--;
    if(n==2) return;
    fib(n,n2,m);
}

int main(){
    cout<<0<<" "<<1<<" ";
    fib(1);
}