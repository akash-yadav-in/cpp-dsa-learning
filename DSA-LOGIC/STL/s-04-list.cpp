#include<iostream>
#include<vector>
#include<list>
using namespace std;
/*
          ========== LIST ===============
---- Implemented as doubly linked list
 -----That means the we can push element from back and front both in this List
 -----Similarly we can pop_element from back and from the front
 ----- Similaryl emplace back and front will act as of pop_backa and pop_front()

 ------- And all the vector functions are applicable here as well ---------
  --- like size  , begin , rbegin ,clear  etc


*/


int main()
{
    list<int> list01 = {1 , 3 , 5};  // this is the way to  intialize the list
    list01.push_back(7);
    list01.push_front(29);

    list01.pop_back();
    list01.pop_front();

    for(int value  : list01)
    {
        cout<<value<<endl;
    }
    

   
return 0;
}
