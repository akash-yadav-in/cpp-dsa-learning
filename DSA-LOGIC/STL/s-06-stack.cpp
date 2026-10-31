#include <iostream>
#include <stack>
using namespace std;

/*
  ======= STACKS ======
  Non sequential container
  we visulaize a stack in LIFO structure Last in first out data structure


*/
int main()
{
    stack<int> s; // creating stack

    s.push(1); // pushing element 1in s
    s.push(4);
    s.push(6);

    // stack<int> s1;

    // s1.swap(s); // This will swap element from s to s1

    cout << "top-value" << s.top() << endl; // Printing the top value

    cout << "---------------" << endl;

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    return 0;
}
