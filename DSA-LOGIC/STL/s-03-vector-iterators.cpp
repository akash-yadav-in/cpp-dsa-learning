#include <iostream>
#include <vector>
using namespace std;
/*
 ======> Vector Iterators <======

 *** ::  We can imagine Iterators as the pointers :: ***

 1 - vec.begin()   ----  if we derefrence *(vec.begin()) --- then we will get value at that index
 2 - vec.end()     ---- This points to end of the last element not the last element and derefrencing this *(vec.end()) --- this will give the garbarge value

 3 - vec.reverse
*/

int main()
{
    vector<int> vec = {1, 2, 3};

    cout << *(vec.begin()) << endl; // Here we get 1
    cout << *(vec.end()) << endl;   // Here we get garbage random value and not give 3

    cout << *(vec.rbegin()) << endl;

    cout << "------------------------" << endl;
    cout << "--- FORWARD ITERATOR ---" << endl;

    // ITERATORS

    // Forward loop
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << endl;
    }

    cout << "--------------------------" << endl;
    cout << "--- BACKWARD ITERATORS ---" << endl;

    // backward loop
    
    for (auto it = vec.rbegin(); it!=vec.rend(); it++)
    {
        cout<< *(it)<<endl;
    }
    

    return 0;
}
