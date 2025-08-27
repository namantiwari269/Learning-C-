#include <iostream>
#include<map>
using namespace std;

int maxsubsum(int arr[],int n){
    int maxi=0;
    for(int i=0;i<n;i++){
        for(int j =i;j<n;j++){
            int sum =0;
            for(int k=i;k<j;k++){
                sum+= arr[k];
            }
            maxi = max(maxi,sum);
        }
    }
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<maxsubsum(arr,n);
}