#include<iostream>
#include<set>
using namespace std;

vector<vector<int>> fsum(int arr[],int n,int target){
    
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l =k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                    vector<int> temp = {arr[i],arr[j],arr[k]+arr[l]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
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