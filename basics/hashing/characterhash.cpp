#include<iostream>
// max size of array 10^6 in main , but globally it can be declared 10^7
using namespace std;

int main(){
    string s;
    cout<<"enter string";
    cin>>s;
    int n = s.size();
    //hash/store
    int hash[26] = {0}; // ize will be max vaue in an array
    for(int i =0;i<n;i++){
        int x = s[i] - 'a';
        hash[x]+=1;
    }
    cout<<endl<<"enter how many character to find"<<" ";
    int q;
    cin>>q;
    for(int i =0; i<q;i++){
        char a;
        cout<<"enter the number to find"<<" ";
        cin>>a;
        cout<<hash[a-'a']<<endl;
    }

    return 0;
}