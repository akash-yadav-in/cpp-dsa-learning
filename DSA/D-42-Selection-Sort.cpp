#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
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
