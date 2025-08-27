#include<iostream>

using namespace std;
int sum(int n,int s=0){
    s += n;
    n--;
    cout<<s<<endl;
    if(n<1){
        return s;
    }
    return sum(n,s);

}

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<< sum(n);
    return 0; 
}