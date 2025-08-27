#include <iostream>
#include<map>
using namespace std;

int majority_ele(int arr[],int n){
    int cnt =0;
    int ele ;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele= arr[i];
        }
        else if(arr[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(ele==arr[i]){
            cnt1++;
        }
    }
    if(cnt1>n/2) return ele;
    else return -1;
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<majority_ele(arr,n);
}