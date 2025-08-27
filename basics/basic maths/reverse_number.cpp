#include<iostream>
using namespace std;
//o(log10(n))
int reverse(int n){
    int d;
    int a = n;
    int rev =0;
    while(a>0){
        d=a%10;
        rev = 10 * rev + d;

        a/=10;
    }
    return rev;
}

int main(){
    int n;
    cout<< "enter a number";
    cin>> n;
    cout<<reverse(n);

    return 0;
}