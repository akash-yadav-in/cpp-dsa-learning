#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
---- Custom Comparitor Making -- --
*/

bool comparitor(pair<int , int> p1 , pair<int , int> p2)
{
  if (p1.second < p2.second)
  {
    return true;
  }
  if (p1.second > p2.second)
  {
    return false;
  }
  if (p1.first < p2.first)
  {
     return false;
  }
  
  

}

int main()
{
     
    vector<pair<int , int>> new_vec = {{1 , 2} , {3  , 2} , {5 , 2} , {9 , 0}};  // This is how we can add pairs inside a vector 

    // by default soring happen on basis of first value

    sort(new_vec.begin() , new_vec.end() , comparitor);  

    for(auto p : new_vec)
    {
      cout<<p.first<<" "<<p.second<<endl;
    }
 
   
return 0;
}
