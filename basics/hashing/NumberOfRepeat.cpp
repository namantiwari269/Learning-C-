#include<iostream>
// max size of array 10^6 in main , but globally it can be declared 10^7
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    //hash/store
    int hash[13] = {0}; // ize will be max vaue in an array
    for(int i =0;i<n;i++){
        hash[arr[i]]+=1;
    }
    cout<<endl<<"enter how many number to find"<<" ";
    int q;
    cin>>q;
    for(int i =0; i<q;i++){
        int a;
        cout<<"enter the number to find"<<" ";
        cin>>a;
        cout<<hash[a]<<endl;
    }

    return 0;
}