#include<iostream>
#include<map>
// much better than array hash as space complexity
// but time complexity is log(n) so we use , unordered avg o(1) worst o(n)
//so give priority to unordered 
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
    unordered_map<int,int> hash; // ize will be max vaue in an array
    for(int i =0;i<n;i++){
        hash[arr[i]]++;
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