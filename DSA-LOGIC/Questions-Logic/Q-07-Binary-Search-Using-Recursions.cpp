#include <iostream>
#include <vector>
using namespace std;
/*
-------------- BINARY SEARCH----------------
-- Here we are Using recursive approach for Binary search 
-- Time Complexity is O(logn) and space is also O(logn)

*/
class Solutions
{

public:
    int Binary_Using_Recursions(vector<int> &arr, int target, int st, int end)
    {

        if (st <= end) // We have used this here because we want to stop when st becomes greater then the end and end become lesser then the start
                       // Also this is the base case as well
        {

            int mid = st + (end - st) / 2;
            if (target > arr[mid])
            {
                // Main recursive call we have made here that is that if the target is  > then the arr[mid]  then we are callinf thr above function by just changing one thid that is passing mid + 1 at start
                // And this will call the functon again and again until and unless start <= end and eventually we will either get the andwer or that
                // target does not exist in that array
                return Binary_Using_Recursions(arr, target, mid + 1, end);
            }
            else if (target < arr[mid])
            {
                return Binary_Using_Recursions(arr, target, st, mid - 1);
            }
            else if (target == arr[mid])
            {
                return mid;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};

    Solutions c;
    cout << c.Binary_Using_Recursions(arr, 12, 0, arr.size() - 1) << endl;

    return 0;
}
