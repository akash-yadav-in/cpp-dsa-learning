#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<pair<int , int >> vec = {{1 , 3}};  // Pair inside vector

    vec.push_back({2 , 4});  // This way push back pair in vector

    vec.emplace_back(5 , 34);  // Here no need to make the pair as emplace back function automtically autocorrect it

    


    for(auto p : vec)
    {
        cout<<p.first<<" "<<p.second<<endl; 
    }
   
return 0;
}
