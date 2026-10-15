#include <iostream>
#include <vector>
#include <climits>
using namespace std;
/*
--------------- PAINTER'S PARTITION PROBLEM ------------------
1- DIRECT VARIATION OF BOOK ALLOCATION PROBLEM
2- Here we also have use max_value because here the start value ==> min time to complete the paint all work
     === Explained in (simple words)
       === like in the problem we had 40 , 30 , 10, 20 if we would have assigned 4 painter to comeplete this painting on the board then the painter
          --> would have taken then time of  40  , 30 , 10 , 20 units respev and it
       === the whole work would be incomplete if the 40 units time painter has not complete his work

     === therefore the minimum time required is 40 and max time is sum of all tha is 100

3---- TIME COMPLEXIITY = O(n(log(sum)))


====== QUESTION INFORMATION =======
1- GIVEN N BOARDS OF LENGTH EACH GIVEN IN FOR OF ARRAY
2- M PAINTER  AND EACH PAINTER TAKE 1 UNIT OF TIME TO PAINT 1 UNIT OF BOARD
3-----> FIND THE MINIMUM TIME TO PAINT ALL THE BOARDS ----> ANY PAINTER WILL PAINT IN CONTIGOUS MANNER

*/
class Solution
{
public:
    //======================== FUNCTION 1 ==========================
    bool isValid(vector<int> &arr, int n, int m, int mid)
    {
        int worker = 1, time = 0;
        for (int i = 0; i < n; i++)
        {

            if (time + arr[i] <= mid)
            {
                time += arr[i];
            }
            else
            {
                worker++;
                time = arr[i];
            }
        }
        if (worker > m)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    // ============================== FUNCTION - 02 ==================================
    int Painter_partition(vector<int> &arr, int n, int m)
    {
        int sum = 0, max_Value = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            max_Value = max(max_Value, arr[i]);
        }

        // BINARY SEARCH LOGIC
        int start = max_Value, end = sum, ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (m > n)
            {
                return -1;
            }

            if (isValid(arr, n, m, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    Solution c;
    cout << c.Painter_partition(arr, n, m) << endl;

    return 0;
}
