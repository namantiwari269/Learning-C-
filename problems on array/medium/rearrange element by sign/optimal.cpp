#include<iostream>
using namespace std;

vector<int> resign(int arr[],int n){
    int pos =0;
    int neg =1;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[i]=arr[i];
            pos=pos + 2;
        }
        else{
            ans[i=arr[i]];
            neg=neg+2;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    ans = resign(arr,n);
}