#include<iostream>
#include<set>
using namespace std;
//time = o(n)
int main(){

    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.emplace_back(arr[i]);
        }
    }
    int m = temp.size();
    for(int i =0;i<m;i++){
        arr[i]=temp[i];
    }
    for(int i =m;i<n;i++){
        arr[i]=0;
    }
    
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}