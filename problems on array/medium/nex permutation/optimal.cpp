#include<iostream>
using namespace std;

void resign(int arr[],int n){
    int ind =-1;
    for(int i =n-2;i>0;i--){
        if(arr[i]<arr[i+1]){
            ind =i;
            break;
        }
    }
    if (ind==-1){
        reverse(arr,arr+n);
    }
    for(int i =n-1;i>ind;i--){
        if(arr[i]>arr[ind]){
            swap(arr[ind],arr[i]);
            break;
        }
    }
    reverse(arr+ind+1,arr+n);
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    resign(arr,n);
}