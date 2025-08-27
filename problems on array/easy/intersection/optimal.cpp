#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in array a: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cout << "Enter the number of elements in array b: ";
    cin >> m;

    vector<int> b(m);
    cout << "Enter " << m << " elements:\n";
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int i =0;
    int j=0;
    vector<int> inter;
    while(i<n && j<m){
        if(a[i]==b[j]){
            inter.push_back(a[i]);
            i++;
            j++;
        }
        else{
            i++;
        }
        
    }
    for(auto it = inter.begin();it!= inter.end();it++){
        cout<<*(it)<<" ";
    }
}