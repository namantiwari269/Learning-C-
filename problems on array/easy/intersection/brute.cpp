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

    vector<int> vis(m, 0); 
    vector<int> inter;
    for(int i=0;i<n;i++){
        for(int j =0; j<m;j++){
            if(a[i]==b[j]){
                if(vis[j]==0){
                    inter.push_back(a[i]);
                    vis[j]=1;
                }
                if(b[j]>a[j]){
                    break;
                }
            }
        }
    }
    for(auto it = inter.begin();it!= inter.end();it++){
        cout<<*(it)<<" ";
    }

    return 0;
}