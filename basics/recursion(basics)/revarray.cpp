#include<iostream>

using namespace std;

void f(int a, int arr[],int n){
    if(a>=n/2) return ;
    swap(arr[a], arr[n-a-1]);
    f(a+1,arr,n);
}

int main(){
    int n; 
    cout<<"enter length of array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    f(0,arr,n);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

