#include <iostream>

using namespace std;



int longsub(int arr[],int n,long long k){
    int left =0;
    int right =0;
    long long sum=arr[0];
    int max_len=0;
    while(right<n){
        while(sum>k && left<right){
            sum -= arr[left];
            left++;
        }
        
        if(sum==k){
            max_len = max(max_len,right-left +1);
        }
        right++;
        if(right<n) sum += arr[right];
    }
    return max_len;
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    long long k;
    cout<<"\nenter a number:";
    cin>>k;
    cout<< longsub(arr,n,k);
}