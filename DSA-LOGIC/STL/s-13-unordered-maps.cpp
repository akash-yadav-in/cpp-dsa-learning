#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;

/*
====== Unordered Map =========
- Stores the data in random order 
- unorderd map  and map have diffrence in their time compexity majority cases in o(1) and sometimes O(n); 

*/

int main()
{
  unordered_map<string , int> m ;
  m.emplace("tv" , 100);
  m.emplace("Watches" , 200);
  for(auto p : m)
  {
    cout<<p.first<<" "<<p.second<<endl;
  }
    
   
return 0;
}
