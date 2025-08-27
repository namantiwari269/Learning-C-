#include<iostream>
using namespace std;

// pushes max to last; basically opp. of selection sort

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    for(int i =n-1 ; i>=1;i--){
        int didswap=0;
        for(int j=0; j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
    }
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}