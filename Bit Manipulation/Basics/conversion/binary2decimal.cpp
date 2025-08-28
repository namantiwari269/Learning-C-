#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int binary2decimal(string s){
    int num =0;
    int p2=1;
    int n = s.length();
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            num=num + p2;
        }
        p2=p2*2;
    }
    return num;

}
int main(){
    int a = binary2decimal("1101");
    cout<<a;
}