#include<iostream>
#include<set>
using namespace std;
//o(nlogn + n)
int main(){

    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    set<int> s;
    for(int i =0;i<n;i++){
        s.insert(arr[i]);
    }
    int index =0;
    for(auto it:s){
        arr[index]=it;
        index++;
    }

}