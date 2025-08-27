#include<iostream>
using namespace std;

int linear(int arr[],int n,int a){
    for(int i =0; i<n;i++){
        if(arr[i]==a){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter a number";
    int a ;
    cin>>a;
    cout<< linear(arr,n,a);
}