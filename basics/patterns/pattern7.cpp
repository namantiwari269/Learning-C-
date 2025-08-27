/*
        *        
       ***       
      *****      
     *******     
    *********    
   ***********   
  *************  
*/
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i =0 ; i< x;i++){
        for(int k = x-i ; k>=0; k--){
            cout<<" ";
        }
        for(int j = 0 ; j< (2*i +1); j++){
            cout<<"*";
        }
        for(int k = x-i-1 ; k>0; k--){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}