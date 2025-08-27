#include <iostream>
using namespace std;

int countNonEmptySubstr(string str)
{
   int n = str.length();
   return n*(n+1)/2;
}
