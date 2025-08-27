#include<iostream>
using namespace std;
//o(log10(n))
bool armstrong(int n){
    int d;
    int a = n;
    int arm = 0;
    while(a>0){
        d=a%10;
        arm+= pow(d,3);
        a/=10;
    }
    if(arm == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<< "enter a number";
    cin>> n;
    if(armstrong(n)==true) cout<<"armstrong";
    else cout<<"not armstrong";

    return 0;
}