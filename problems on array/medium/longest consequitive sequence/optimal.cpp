#include<iostream>
#include<unordered_set>
using namespace std;

int longest_seq(int arr[],int n){
    if(n==0) return 0;
    int longest =1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);

    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt =1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                cnt++;
                x++;
            }
            longest=max(cnt,longest);
        }
    
    }
    return longest;
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