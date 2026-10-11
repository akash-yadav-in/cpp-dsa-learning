#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int lowerBound(vector<int> &nums, int x)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] >= x)
            {
                return i;
                break;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {3, 3, 8, 15, 19};
    Solution c;
    cout << c.lowerBound(nums, 9);

    return 0;
}
