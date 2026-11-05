#include <iostream>
#include <vector>
#include<queue>
using namespace std;
/*
     ========== Priority - Queue ===============
          1 - Internally using a max-heap structures or min-heap binary trees
          2 - Highest priority is by default the largest value 
          3 - When popping it we wil get highest then 2nd highest and so on in sorted form
 === functions are
   -- Push , Emplace
    - top ,  pop , size and empty these function can also be used 





*/


int main()
{
    priority_queue<int> p;

    p.push(12);  // This is the first function when this all the element stored will be in highest ---> then second highest and so on    
    p.push(1);
    p.push(119);

    while (!p.empty())
    
    {
       cout<<p.top() <<" ";
       p.pop();
    }
    cout<<endl;

    return 0;
}
