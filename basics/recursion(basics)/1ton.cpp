#include<iostream>

using namespace std;
void print(int n,int m){
    cout<<m<<endl;
    m++;
    if(n<m) return;
    print(n,m);
}


int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    print(n,1);
    return 0;
}