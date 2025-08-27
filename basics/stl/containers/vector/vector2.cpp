#include<iostream>
using namespace std;

int main(){
    vector<int> v = {20,10,15,5,7};
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<endl;
    
    vector<int>::iterator x = v.end();//it gives memory location after the last element so do it-- for last element
    cout<< v[0] << " "<< v.at(0)<<endl;
    cout<<v.back()<<endl;//here 7
    for(vector<int>::iterator a = v.begin() ;a!=v.end();a++){
        cout<<*(a)<<endl;
    }
    for(auto a = v.begin() ;a!=v.end();a++){
        cout<<*(a)<<endl;
    }
    for(auto a : v ){
        cout<<a<<endl;
    }
    return 0;
}