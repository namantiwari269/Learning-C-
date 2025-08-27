#include<iostream>
#include<set>

using namespace std;

int main(){
    int n;
    int arr1[n];
    cout<<"enter the number of elements : ";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    int arr2[m];
    cout<<"enter the number of elements : ";
    cin>>n;
    for(int i =0;i<m;i++){
        cin>>arr2[i];
    }
    set<int> st;
    for(int i =0;i<n;i++){
        st.insert(arr1[i]);
    }
    for(int i =0;i<m;i++){
        st.insert(arr2[i]);
    }
    int o =st.size();
    int uni[o];
    int ind=0;
    for(auto it:st){
        uni[ind]=it;
        ind++;
    }
    for(int i =0;i<o;i++){
        cout<<uni[i]<<" ";
    }
    return 0;
}