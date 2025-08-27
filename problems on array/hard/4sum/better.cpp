#include<iostream>
#include<set>
using namespace std;

vector<vector<int>> tsum(int arr[],int n,int target){
    
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<long long> hashset;
            for(int k =j+1;k<n;k++){
                long long fourth = target-(arr[i]+arr[j]+arr[k]);
                if(hashset.find(fourth)!=hashset.end()){
                vector<long long> temp={arr[i],arr[j],fourth};
                sort(temp.begin(),temp.end());
                
            }
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