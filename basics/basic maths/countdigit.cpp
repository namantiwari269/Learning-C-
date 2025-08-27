#include<iostream>
using namespace std;
//o(log10(n))
int count_digit(int n){
    int cnt = 0;
    int a = n;
    while(a>0){
        a/=10;
        cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cout<< "enter a number";
    cin>> n;
    cout<<count_digit(n)<<endl;

    //also
    int cnt = (int)(log10(n)+1);
    cout<<cnt;

    return 0;
}