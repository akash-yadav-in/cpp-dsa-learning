#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
============----> Merge Two Sorted Arrays <------=============
---- So In this problem we are given with two array A(( 1 , 2 , 3 ,__ , __ , __))
                                                    B((2 , 5 , 6))

    now we know that in array A we have already givn with the space of element we have to add from Array B
    So we are going with approach 1- of going in descending order that is we are running a loop and check the last element of array B with array A and check which is bigger and then swap with it in the last of
    array A



*/

class Solution
{
public:
    void merge_Two_sorted_arrays(vector<int> &nums, vector<int> &nums2)
    {
        int m = nums.size();
        int n = nums2.size();
        int index = m + n - 1, i = m - 1, j = n - 1;
        ;

        while (i >= 0 && j >= 0) // In this bigger part we are trying to copy the larger element in Our Array A
        {
            if (nums[i] >= nums2[j])
            {
                nums[index] = nums[i];
                i--;
                index--;
            }
            else
            {
                nums[index] = nums2[j];
                index--;
                j--;
            }
        }

        if (i < 0)
        {
            while (j >= 0)
            {
                nums[index] = nums2[j];
                index--;
                j--;
            }
        }
    }
};
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<int> nums2 = {2, 5, 6};
    Solution c;
    c.merge_Two_sorted_arrays(nums, nums2);

    // ------- Verification only -----
    for (int i = 0; i < nums.size() + nums2.size(); i++)
    {
        cout << nums[i];
    }

    return 0;
}
