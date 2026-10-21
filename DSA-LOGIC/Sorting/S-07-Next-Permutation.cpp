#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
============----> Next Permutation <------============
 Given array A is = [1 , 2 , 3]
      we have to return in the form of lexicographically form
                                       ---> that is the smallest is coming first then then next one and then the next one
                                       ----> here we dont have the return a new array rather we have to return the same arrray
                                       ---> like in this example the lexicographically element of 123 will be 132



*/

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        // Finding the piviot
        int piviot = -1;

        for (int i = n - 1; i > 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                piviot = i;
                break;
            }
        }

        if (piviot == -1)
        {
            reverse(nums.begin(), nums.end()); // in place means inside that vector we have made changes
            return;
        }

        // 2nd largest element
        for (int i = n - 1; i > piviot; i--)
        {
            if (nums[i] > nums[piviot])
            {
                swap(nums[i], nums[piviot]);
                break;
            }
        }

        // 3rd  Reverse Element
        int i = piviot + 1, j = n - 1;
        while (i <= j)
        {
            swap(nums[i++], nums[j--]);
        }
    }
};
int main()
{
    vector<int> nums = {1, 2, 3};

    Solution c;
    c.nextPermutation(nums);

    // ------- Verification only -----
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }

    return 0;
}
