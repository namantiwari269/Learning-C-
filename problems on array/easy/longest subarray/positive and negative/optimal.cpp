#include <iostream>
#include <map>
using namespace std;



int longsub(int arr[],int n,long long k){
    long long sum =0;
    int max_len =0;
    map <long long,int> mpp;
    for(int i=0;i<n;i++){
        if(sum ==k){
            max_len= max(max_len,i+1);
        }
        long long rem = sum -k;
        if(mpp.find(rem)!= mpp.end()){
            int len = i - mpp[rem];
            max_len=max(max_len,len);

        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum] = i;
        }
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