#include <iostream>
#include <vector>
#include <map>
using namespace std;

/*
================== MAP CONTAINER =========================
 used to store the (key ,values)   key are unique value that cannot be duplicated

 ---- How TO CREATE A MAP ---> map<string,int> m; here string is the key and int is the types of the vlaues you want to store in it
 ---- To insert and change the value inside the map we the syntax
         ---- m[key] = value;

         --- by default sort the data in asceding order

         3 - we can use m.erase to erase any value pair
         4 - we use find = m.find if found we will get the iterator

*/

int main()
{
    map<string, int> m;
    m["television"] = 1;
    m["Laptop"] = 100;
    m["Headphones"] = 230;

    m.insert({"camera", 122}); // use can use insert or emplace function when using emplace you have to pass the individual values nad no need to make the function

    cout << "count = " << m.count("Laptop") << endl; // This checks for how many count for the laptop values are present
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    // Logic for finding a key
    if (m.find("Laptop")!= m.end())
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not_Found "<<endl;
    }
    

    return 0;
}
