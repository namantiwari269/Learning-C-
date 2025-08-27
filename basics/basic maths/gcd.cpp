#include<iostream>
using namespace std;
//o(log10(n))
int gcd(int n1, int n2){
    int gcd =1;
    for(int i =0 ; i<= min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    return gcd;
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