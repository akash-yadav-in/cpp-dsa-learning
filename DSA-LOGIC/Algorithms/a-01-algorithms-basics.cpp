#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
================== ALGORITHMS =========================
- Sorting Algorithm
  1 - sort(arr , arr+n) ---> We can sort the array by passing the


  2 - sort(arr , arr+n , greater<int>()) --- if we want to sort in descening order use a comparison while sorting -- we pass the comparitor



  3 - sort(v.begin() , v.end()) ---- vector for them we can use this one

*/

int main()
{
    int arr[5] = {1, 4, 6, 7, 0};
    sort(arr, arr + 5);
    for (int value : arr)
    {
        cout << value << " ";
    }
    cout << endl;



  cout<<"2nd CASE -------> "<<endl;

    vector<int> vec = {1, 0, 9, 7, 4, 3};
    int x = vec.size() - 1;

    sort(vec.begin(), vec.end(), greater<int>());
    cout << "Descending order ---- Comparitor ----- " << endl;
    for (int value : vec)
    {

        cout << value << " ";
    }
    cout << endl;


   


    return 0;
}
