#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
/*
--------------- AGGRESSIVE COWS PROBLEM ------------------
= = = CONCEPT SAME AS BOOK ALLOCATION AND PAINTER'S PROBLEM
  --- minimum distance between 2 cows can be alway is 1 and it cannot be less than this
  --- maximum distance can be arr[last] - arr[start] this is max distance


===================== Function -1 logic =========================
       1- first we will sort the array in ascending order so that we can now place the cows and check whether mid is valid or not

                  important that we have taken mid as min distance assumed in funciton -1

       2- iN intial scenario we have taken one cow and its last paostion is  = sorted array ka first element that is at arr[0]
       3- next postion ke liye we check ki kya hum us postion per cow ko place kar sake hain ki nahi such that its disnce is bigger than the mid value


*/
class Solution
{
public:
    //============== FUNCTION - 1 =========================

    bool isValid(vector<int> &arr, int n, int m, int mid)
    {
        sort(arr.begin(), arr.end());
        int cow = 1, last_postion_cow = arr[0];
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] - last_postion_cow) >= mid)
            {
                cow++;
                last_postion_cow = arr[i];
            }
        }
        if (cow < mid)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    //================= FUNCTION - 2 =======================

    int cow_place(vector<int> &arr, int n, int m)
    {

        int start = 1, end = arr[n - 1] - arr[0], ans = -1;
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
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = 5, m = 3;

    Solution c;
    cout << c.cow_place(arr, n, m) << endl;

    return 0;
}
