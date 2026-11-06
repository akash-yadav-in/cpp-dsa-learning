#include<iostream>
#include<vector>
#include<map>
using namespace std;

/*
====== Concept of Multi maps =====
- So multi map is different from map in this way that since we can store multiple values in this we don't use square notation []



*/
int main()
{
    multimap<string , int> m;
    m.insert({"Television" , 120});
    m.insert({"Bike" , 190});
    m.insert({"Headphone" , 230});

    for(auto p : m)
    {
        cout<<p.first <<" "<<p.second <<endl;
    }

  
return 0;
}
