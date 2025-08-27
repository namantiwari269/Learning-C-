#include<iostream>
#include<map>
using namespace std;

string two_sum(int arr[],int n ,int k){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        if(mpp.find(k-arr[i])!=mpp.end()){
            return "yes";//or indexes stored in map
        }
        mpp[arr[i]]=i;
    }
    return "no";
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
    string a = two_sum(arr,n,k);
}