#include<iostream>
using namespace std;
void printrow(long long r){
    int ans =1;
    cout<<ans<<" ";
    for(int i=1;i<r;i++){
        ans *= r-i;
        ans/=i;
        cout<<ans<<" ";
    }
}


int main(){
    long long r;
    cin>>r;
    printrow(r);
}