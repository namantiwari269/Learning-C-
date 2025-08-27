#include<iostream>
using namespace std;

void sortzot(int arr[],int n){
    int cntz=0;
    int cnto=0;
    int cntt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) cntz++;
        else if(arr[i]==1) cnto++;
        else cntt++;
    }
    for(int i=0;i<cntz;i++) arr[i]=0;
    for(int i=cntz;i<cntz+cnto;i++) arr[i]=1;
    for(int i=cntz+cnto;i<n;i++) arr[i]=2;

}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    sortzot(arr,n);
}