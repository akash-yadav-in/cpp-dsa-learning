#include <iostream>
#include <vector>

using namespace std;
/*
---===> Insertion Sort <===---
1 - here we consider some part of the array to be sorted and place the new element or more like inserting that new element accordinng to its position
 -----> we assume that our first index element is sorted part and after that all are unsorted
 -----> from the unsorted part we will pick the first element and arrange that to its correct position in the sorted pass depending is it bigger or smaller then the single sorted element


*/

class Solution
{
public:
    void Insertion_sort(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++) // We have done this i=1 intentionally because we want to show i as the first element of  the unsorted part.
        {
            int current = nums[i];
            int previous = i - 1;

            while (previous >= 0 && nums[previous] > current)
            {
                nums[previous + 1] = nums[previous];
                previous--;
            }
            nums[previous + 1] = current; // Placing the correct element at the correct place
        }
    }
};

int main()
{
    vector<int> nums = {4, 1, 5, 2, 3};
    Solution c;
    c.Insertion_sort(nums);

    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
