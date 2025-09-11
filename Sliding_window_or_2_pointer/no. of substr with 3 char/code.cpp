#include<iostream>
using namespace std;
int numberOfSubstrings(string s) {
    vector<int> hash(3,-1);
    int cnt =0;
    int n = s.size();
    for(int i=0;i<n;i++){
        hash[s[i]-'a']=i;
        cnt+= 1+ *min_element(hash.begin(),hash.end());
    }
    return cnt;
}
