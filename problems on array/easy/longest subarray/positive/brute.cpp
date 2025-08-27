#include<iostream>
#include<set>
using namespace std;

int longsub(int arr[],int n,int k){
    int longest= 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum =0;
            for(int l=i;l<=j;l++){
                sum += arr[l];
            
            }
            if(sum ==k){
                longest = max(longest, j-i+1);
            }
        }
    }
    return longest;
}


int main(){

    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"\nenter a number:";
    cin>>k;
    cout<< longsub(arr,n,k);
}