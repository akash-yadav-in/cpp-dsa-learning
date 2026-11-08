#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
/*
 ========= REVERSER ALGORTIHM ===========
  ---- WE CAN USE THIS ALGORTIHM TO REVERSE THEN VALUE OF ANY VECTOR
   SYNTAX - - - > reverse(vec.begin() , vec.end())
*/


int main()
{
    vector<int> vec = {1 , 4 , 3 , 6 , 5 , 0};
    reverse(vec.begin() , vec.end());

    for(int value : vec)
    {
        cout<<value<<endl;
    }
   

    return 0;
}
