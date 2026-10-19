#include <iostream>
#include <vector>
using namespace std;
/*
============----> SORTING AN ARRAY OF 0s , 1s , 2s <------=============
1- Brute force Approach
    --- In The Brute Force Approach we can use sort function inbuilt one by using sort(nums.begin() , nums.end());
    --- Time complexity is O(nlogn)

============ OPTIMISED APPROACH ====================
    --- We alredy know that in our array we will only have 0s 1s and 2s
    --- We can run a loop and store the count of 0s and count of 1s and count of 2s ---- Store
    --- Then in the second iteration we will run a loop and jitne number of zeros honge utni baar loop chala ke we will store the zeros first fir 1s and then fir 2s


*/

class Solution
{
public:
    void array_sort(vector<int> &nums)
    {

        // Below is the loop where we are storing the number of time 0s ,1s and 2s came
        int counter_zeros = 0, counter_ones = 0, counter_two = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                counter_zeros++;
            }
            else if (nums[i] == 1)
            {
                counter_ones++;
            }
            else
            {
                counter_two++;
            }
        }

        // Now Below is the loop for rewriting the elements of the array

        int index = 0;

        for (int i = 0; i < counter_zeros; i++)
        {
            nums[index++] = 0;
        }
        for (int i = 0; i < counter_ones; i++)
        {
            nums[index++] = 1;
        }
        for (int i = 0; i < counter_two; i++)
        {
            nums[index++] = 2;
        }
    }
};
int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    Solution c;
    c.array_sort(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
