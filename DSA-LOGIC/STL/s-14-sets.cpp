#include <iostream>
#include <vector>
#include<set>
using namespace std;

/*
================== SET CONTAINER =========================
- Similar to maps
- Set contains unique values
- If we insert a duplicate values then only one time the duplicated data will be printed . and not multiple times
- Order we get in set is sorted order
- Same all fucntion like count , erase. find. size , empty , erase

- Lower_bound = return the miniumu this value i want or the value jut above thir refrence value
example if we set the refrenct ot 4 the it should return 4 and if 4 is not preset inside the set then it should return the 5
if no value then it return s.end() value = 0 printed

LOWER BOUND  - VALUE SHOULD NOT BE LESS THAN REFRENCE VALUE (Here it can be equal to refrence value)

UPPER BOUND - VALUE SHOULD BE GRATER THEN REFRENCE VALUE (here it cannot be equal to refrence value)

- Here we also have Multi_set
- We also have Unordered_set time compexit O(1);--- very optimised

*/

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(6);

    for(auto value : s)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    cout<<"LOWER // UPPER BOUND "<<endl;
    cout<<"Lower Bound "<<*(s.lower_bound(4))<<endl;
    cout<<"Upper Bound "<<*(s.upper_bound(4))<<endl;

        

    return 0;
}
