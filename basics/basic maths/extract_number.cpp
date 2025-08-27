#include<iostream>
using namespace std;
//o(log10(n))
void extract_digit(int n){
    int d;
    int a = n;
    while(a>0){
        d=a%10;
        cout<<d<<endl;
        a/=10;
    }
}

int main(){
    int n;
    cout<< "enter a number";
    cin>> n;
    extract_digit(n);

    return 0;
}