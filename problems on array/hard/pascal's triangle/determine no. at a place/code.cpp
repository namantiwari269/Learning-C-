#include<iostream>
using namespace std;
long long ncr(long long n,long long r){
    long long res=0;
    for(int i =0;i<r;i++){
        res *= (n-i);
        res/=(i+1);
    }
    return res;
}


int main(){
    long long r;
    long long c;
    cin>>r;
    cin>>c;
    long long ans = ncr(r-1,c-1);

}