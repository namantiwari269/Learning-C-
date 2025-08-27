#include<iostream>
using namespace std;

int longest_seq(int arr[],int n){
    int cnt =1;
    for(int i=0;i<n;i++){
        int x = arr[i];
        int a = i;
        for(int j=0;j<n;j++){
            if(arr[j]== arr[a]+1){
                cnt++;
                a=j;
            }

        }
    }

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