#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
-----===> BUBBLE SORT <==-------
1- In this technique we compare the element like the first one pair and the next element and the bigger one will be swaped to right side this way way we will sort the whole array in ascending order
2- While checking we will also swap the the bigger one to right

----- Iteration -----
1  - in  the first iteration or the loop we will find that our largest element will be at the last of the array
2  - in the next iteration or loop we will again run and finally sort all the unsorted element of the array

*/
class Solution
{
public:
    vector<int> bubbleSort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = 0; j < (nums.size()) - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j + 1], nums[j]);
                }
            }
        }

        return nums;
    }
};

int main()
{
    vector<int> nums = {4, 1, 5, 2, 3};
    Solution c;
    c.bubbleSort(nums);
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i];
    }

    return 0;
}
