#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
---===> Selection Sort <===---
1- We imagine the array into 2 parts that is One part is Sorted and the other part is unsorted

2- we assume it ot unsorted array and we pick for smallest element and place that smallest element at the index 0 by swapping it

3- at every time we are updating our our unsorted part and also changing the the smallest index every time


*/

class Solution
{
public:
    vector<int> selectionSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int smallest = i;

            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] < nums[smallest])
                {
                    smallest = j;
                }
            }
            swap(nums[i], nums[smallest]);
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {4, 1, 5, 2, 3};
    Solution c;
    c.selectionSort(nums);

    for (int i = 0; i < 5; i++)
    {
        cout << nums[i];
    }

    return 0;
}
