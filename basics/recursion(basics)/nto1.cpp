#include<iostream>

using namespace std;
void print(int n,int m){
    cout<<n<<endl;
    n--;
    if(m>n) return;
    print(n,m);
}


int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    print(n,1);
    return 0;
}