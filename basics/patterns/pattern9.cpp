/*
     *    
    ***   
   *****  
  ******* 
 *********
 ********* 
  *******  
   *****   
    ***    
     *     
*/
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int y = x/2;
    for(int i =0 ; i< x;i++){
        if(i< x/2){
        for(int k = y-i ; k>0; k--){
            cout<<" ";
        }
        for(int j = 0 ; j< (2*i +1); j++){
            cout<<"*";
        }
        for(int k = y-i-1 ; k>0; k--){
            cout<<" ";
        }
        cout<<endl;
        }
        else{

            int n = i - y;
            for(int k = 0 ; k<=n; k++){
                cout<<" ";
            }
            for(int j = (2*(y-n)-1) ; j>0; j--){
                cout<<"*";
            }
            for(int k = 0 ; k<=n; k++){
                cout<<" ";
            }
            cout<<endl;

        }

    }

    return 0;
}