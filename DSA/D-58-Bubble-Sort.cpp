#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isSorted(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }

    vector<int> bubbleSort(vector<int> &nums)
    {

        if (isSorted(nums) == false)
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
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution c;
    c.bubbleSort(nums);

    for (int i = 0; i < 5; i++)
    {
        cout << nums[i];
    }

    return 0;
}
