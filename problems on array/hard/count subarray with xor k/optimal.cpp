#include <iostream>
#include <map>
using namespace std;



int longsub(int arr[],int n,long long k){
    int cnt=0;
    int prexor=0;
    map<int,int> mpp;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        prexor^=arr[i];
        int remove = prexor^k;
        cnt += mpp[remove];
        mpp[prexor]++;
    }
    return cnt;
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