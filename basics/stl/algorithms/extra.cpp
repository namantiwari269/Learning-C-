#include<iostream>
using namespace std;

int main(){
    int  a,n;
    vector<int ,int>v;
    sort(a , a+n); // where a +n not included
    sort(v.begin(), v.end()); // where a +n not included
    sort(v.begin(), v.end(), greater<int>); // descending
    int m =7;
    int cnt = __builtin_popcount(m);// total number of 1's in binary for this 3
    long long num = 189371929;
    int cnt = __builtin_popcountll(num);// for long long

    string s = "123";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    auto maxi = max_element(a, a+n);// gives address
    int maxo = *(max_element(a, a+n));//gives the element
    //similarly min

    
    return 0;
}