#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
----- Max - Min Element function -------
- This can be used to find min and max element from a vector




*/
int main()
{
    vector<int> vec = {1, 100, 4, 0};
   cout<<"Max-Element-In-The-Vector-Is : "<< *(max_element(vec.begin(), vec.end()))<<endl; // Used to find the max elemnt in a vector --- since this return the element iterator for printing the element we have to use derefrence operator
   cout<<"Min-Element-In-The-Vector-Is : " <<*(min_element(vec.begin(), vec.end()))<<endl; // Used to find the min elemnt in a vector -- same here as well
 

    return 0;
}
