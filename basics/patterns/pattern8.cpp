/*
 ************* 
  ***********  
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
    for(int i =0 ; i< x;i++){
        for(int k = 0 ; k<=i; k++){
            cout<<" ";
        }
        for(int j = (2*(x-i)-1) ; j>0; j--){
            cout<<"*";
        }
        for(int k = 0 ; k<=i; k++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}