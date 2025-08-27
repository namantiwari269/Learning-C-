#include<iostream>
#include<set>
using namespace std;
//time = o(d)
//space = o(n)
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
    int temp[d];
    for(int i =0; i<d;i++){
        temp[i]=arr[i];
    }
    for(int j = d; j<n;j++){
        arr[j-d]=arr[j];
    }
    for(int k =0; k<d;k++){
        arr[n-d+k]=temp[k];
    }
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}