#include<iostream>
#include<string>
using namespace std;

bool rotateString(string s, string goal) {
    if(s.length()!=goal.length()) return false;
    string temp = s+s;
    //return temp.contains(goal);in latest c++
    if(temp.find(goal)!=string::npos){
        return true;
    }
    else return false;
}