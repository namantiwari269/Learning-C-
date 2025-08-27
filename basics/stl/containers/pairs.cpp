#include<iostream>
using namespace std;

int main(){
    pair<int , int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int , pair<int , int>> q = {1,p};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
    pair<int , int>arr[]= {{4,5},{9,2},{4,7}};
    cout<<arr[2].first;
    return 0;
}