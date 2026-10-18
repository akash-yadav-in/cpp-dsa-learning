#include <iostream>
#include <vector>
using namespace std;


class Solution
{
public:
    vector<int> insertionSort(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++) 
        {
            int current = nums[i];
            int previous = i - 1;

            while (previous >= 0 && nums[previous] > current)
            {
                nums[previous + 1] = nums[previous];
                previous--;
            }
            nums[previous + 1] = current;
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {4, 1, 5, 2, 3};
    Solution c;
    c.insertionSort(nums);

    return 0;
}
