#include<iostream>

using namespace std;

bool f(string s, int i =0){
    int n = s.size();
    if(i>= n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return f(s,i+1);
}

int main(){
    string s;
    cout<<"enter a string"<<endl;
    cin>>s;
    if(f(s)==true) cout<<"palindrome";
    else cout<<"not palindrome";
    return 0;
}
