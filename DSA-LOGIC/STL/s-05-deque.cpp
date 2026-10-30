#include <iostream>
#include <vector>
#include <deque>
using namespace std;
/*
          ========== Deque Sequence Container ===============
-----> This is implemented as double eneded queue
----> This has all the similar functions as those were in the list and vector
---> In deque we can randomly access to any element in it 
                         but we cannot do this in a list





*/

int main()
{
    deque<int> d = {1, 2, 3};

    d.push_back(3);
    d.pop_front();

    for (int value : d)
    {
        cout << value << endl;
    }

  cout<<"----------Random Access Is Possible-----------------"<<endl;
  cout<<d[2]<<endl;

    return 0;
}
