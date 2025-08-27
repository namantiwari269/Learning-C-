#include<iostream>
using namespace std;

int longest_seq(int arr[],int n){
    sort(arr[0],arr[n]);
    int last_small= INT_MIN;
    int longest =1;
    int cnt_curr=1;
    for(int i=0;i<n;i++){
        if(arr[i]-last_small==1){
            cnt_curr++;
            last_small=max(last_small,arr[i]);
            longest=max(longest,cnt_curr);
        }
        else if(arr[i]==last_small){
            continue;
        }
        else{
            cnt_curr=1;
        }
    }
    return(longest);

}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int ans;
    ans=longest_seq(arr,n);
}