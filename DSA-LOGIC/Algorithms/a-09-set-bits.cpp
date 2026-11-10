#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
------ SET-BITS ------
- USED IN COMPETETIVE PROGRAMMING
- Used if we want to find the number of set-bits



*/
int main()
{
   int n = 15;
   long int d = 233335;
   long long int o = 230499923;


   cout<<__builtin_popcount(n)<<endl;        // This is for finding if the value is integer
   cout<<__builtin_popcountl(d)<<endl;      // This is for finding if the value is long integer
   cout<<__builtin_popcountll(o)<<endl;    // This is for finding if the value is long long integer


 
   
return 0;
}
