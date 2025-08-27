#include<iostream>
#include<set>
using namespace std;

vector<vector<int>> tsum(int arr[],int n){
    
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        set<int> hashset;
        for(int j=i+1;j<n;j++){
            int third = -(arr[i]+arr[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int> temp={arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

int main(){
    int n;
    cout<<"enter number of elements";
    cin>> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans;
}