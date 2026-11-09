#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
------ BINARY SEARCH ----
- We can use this syntax like
binary_search(v.begin() , v.end() , target)


*/
int main()
{
    vector<int> vec = {1 , 5 , 6 , 3 ,9};
    cout<<binary_search(vec.begin() , vec.end() , 6)<<endl;  // This return 1 , 0 if tru or false bool
   
return 0;
}
