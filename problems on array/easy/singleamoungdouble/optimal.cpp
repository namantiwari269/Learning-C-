#include<iostream>
#include<set>
using namespace std;

int func(int arr[],int n){
    int xor1 =0;
    for(int i =0;i<n;i++){
        xor1 ^= arr[i];
    }
    return xor1;
}

int main(){

    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<func(arr,n);
}