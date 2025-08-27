#include<iostream>
#include<set>
using namespace std;

int func(int arr[],int n){
    for(int i=0;i<n;i++){
        int flag =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                flag++;
            }
        }
        if(flag!=2){
            return arr[i];
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
    cout<<func(arr,n);
}