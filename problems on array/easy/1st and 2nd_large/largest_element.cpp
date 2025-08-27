#include<iostream>
using namespace std;
// if we do by sorting o(nlogn)
//if by whole loop ; o(n)
int main(){

    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int l = arr[0];
    for(int i =1; i<=n-1;i++){
        if(arr[i]>l){
            l=arr[i];
        }
    }
    cout<<"lergest element"<<l;
}