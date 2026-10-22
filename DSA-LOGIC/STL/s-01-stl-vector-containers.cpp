#include <iostream>
#include <vector>
using namespace std;

// STL Containers
// Vectors

int main()
{
    vector<int> vec;  // 1 - This make a vector size 0
    vec.push_back(3); // 2 - We are pushing an element in the vector vec in the last 
    vec.push_back(2); // 
    vec.push_back(1);
    vec.push_back(9);
    vec.push_back(2);

    vec.capacity(); // 3 - size and capacity are two diff thigs size tell us that how many element in the vec
                    //    capacity tells us what amount of vectors can be stored
 


    vec.emplace_back(4); // 4 - This also add an element in the last 
    vec.pop_back();      // 5 - we are poping or removing an element using pop_back function from the last 


    cout<<vec.at(2);// 6 - both the below ones will tell you the element stored at that index
    cout<<vec[3]<<endl;


    vec.front(); // 7 - This give the element of the front in the vector
    vec.back(); // this one gives back element


    vector<int> vec1(3 , 10);  // 8 - This represnt that we want to store the value of 10 in this vec1---->  3 times 

    vector<int> vec3(vec1);    // 9 - If we want to intialize vec1 elements with vec2 this we can use and pass vec1



     


    // Checking the changes in the vector  vec
    for(int value : vec)
    {
        cout<<value<<endl;
    }
    
    
    // Checking the changes in the vector  vec1
    for(int value : vec1)
    {
        cout<<value<<endl;
    }
                  

    return 0;
}
