#include<iostream>
using namespace std;
//o(log10(n))
bool palindrome(int n){
    int d;
    int a = n;
    int rev =0;
    while(a>0){
        d=a%10;
        rev = 10 * rev + d;

        a/=10;
    }
    if(rev == n){
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
    if(palindrome(n)==true) cout<<"palindrome";
    else cout<<"not palindrome";

    return 0;
}