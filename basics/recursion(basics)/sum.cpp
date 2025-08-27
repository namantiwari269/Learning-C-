#include<iostream>

using namespace std;
int sum(int n,int m,int s){
    s += m;
    m++;
    cout<<s<<endl;
    if(n<m){
        return s;
    }
    return sum(n,m,s);

}


int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<< sum(n,1,0);
    return 0; 
}