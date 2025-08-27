#include<iostream>
using namespace std;

int main(){
    vector<int> v; //{}
    v.push_back(1);//{1}
    v.emplace_back(2); //{1,2}faster that pushback

    vector<pair<int , int>> vec;//{}
    vec.push_back({1,5});//{{1,5}}
    vec.emplace_back(6,5);//{{1,5},{6,5}}
    vector<int> v1(5,100);//{100,100,100,100,100}
    vector<int> v2(v1); //{100,100,100,100,100}
    return 0;
}