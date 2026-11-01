#include <iostream>
#include <vector>
#include <queue>

using namespace std;
/*
          ========== Queue Sequence Container ============
---- > This is a type of FIFO Data structure that is fist in and first out






*/

int main()
{
    queue<int> q;

    // Functions
    q.push(1); // FUNCTION -01
    q.push(2);
    q.push(3);
    q.push(4);

    q.front(); // Function -02

    cout << q.size() << endl; // Function -04

    while (!q.empty())
    {
        cout << q.front();
        q.pop(); // Function -03
    }
    cout << endl;

    // Function -06 is swap function that can swap the elemnt from one queue to another queue

    return 0;
}
