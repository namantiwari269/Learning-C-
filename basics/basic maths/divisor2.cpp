#include<iostream>
using namespace std;

void divisor(int n){
    vector<int> v;
    for(int i =1;i * i<=n;i++){
        if(n%i==0){
            v.emplace_back(i);
            if(i!= n/i){
                v.emplace_back(n/i);
                
            }
        } 

    }
    sort(v.begin(),v.end());
    for(auto it = v. begin() ; it != v.end(); it++){
        cout<<*(it)<<" ";
    }
}
int main(){
    int n;
    cout<< "enter a number";
    cin>> n;
    divisor(n);
}