#include<iostream>
using namespace std;
//o(log10(n))
int gcd(int n1, int n2){
    while(n1>0 && n2 > 0){
        if(n1>n2) n1%=n2;
        else n2%=n1;
    }
    if(n1==0) return n2;
    else return n1;
}

int main(){
    int n1, n2;
    cout<< "enter a number"<<endl;
    cin>> n1;
    cout<< "\nenter a number"<<endl;
    cin>> n2;

    cout<<gcd(n1,n2);

    return 0;
}