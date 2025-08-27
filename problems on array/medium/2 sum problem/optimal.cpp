#include<iostream>
#include<map>
using namespace std;

string two_sum(int arr[],int n ,int k){
    int left=0;
    int right=n-1;
    while(right >= left){
        if(arr[right]+arr[left]<k){
            left++;
        }
        else if(arr[right]+arr[left]>k){
            right--;
        }
        else{
            return "yes";
        }
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