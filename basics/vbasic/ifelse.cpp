#include<iostream>
using namespace std;

int main(){
    int age;
    cout<< "Enter your age";
    cin>> age;
    if(age>=18){
        cout<< "you are an adult";
    }
    else if(age<18 && age >= 13){
        cout<<"you are a teen";
    }
    else{
        cout<<"you are a kid";
    }
    return 0;
}