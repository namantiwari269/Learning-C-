#include<iostream>
using namespace std;

int prime(int n){
    int a=0;
    for(int i =1;i * i<=n;i++){
        if(n%i==0){
            a++;
            if(i!= n/i){
                a++;
                
            }
        }

    }
    return a;

}
int main(){
    int n;
    cout<< "enter a number";
    cin>> n;
    if(prime(n)==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}