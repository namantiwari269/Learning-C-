#include <iostream>
#include <map>
using namespace std;



int longsub(int arr[],int n,long long k){
    int cnt=0;
    int presum;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        int remove = presum -k;
        cnt += mpp[remove];
        mpp[presum]++;
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