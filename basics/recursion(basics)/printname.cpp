#include<iostream>

using namespace std;
void print(string s,int n){
    cout<<"hello "<<s<<endl;
    if(n<=1) return;
    n--;
    print(s,n);
}


int main(){
    string s;
    cout<<"enter a name"<<endl;
    cin>>s;
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    print(s,n);
    return 0;
}