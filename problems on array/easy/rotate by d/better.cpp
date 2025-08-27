#include<iostream>
#include<set>
using namespace std;
//time = o(n)
//spcae = o(1)
int main(){

    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int d;
    cout<<"enter a number";
    cin>>d;
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}