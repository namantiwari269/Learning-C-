#include<iostream>
using namespace std;

string decimal2binary(int n){
    string res = "";
    while(n!=1){
        if(n%2==1) res = '1'+res;
        else res= '0'+res;
        n=n/2;
    }
    res='1'+res;
    return res;
}
int main(){
    string a = decimal2binary(10);
    cout<<a;
}