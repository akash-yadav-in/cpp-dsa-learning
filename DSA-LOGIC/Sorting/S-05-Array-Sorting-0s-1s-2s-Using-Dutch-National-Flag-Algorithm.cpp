#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
============----> SORTING AN ARRAY OF 0s , 1s , 2s <------=============
 --- OPTIMAL APPROACH
 --- We will Take O(n) time complexity only but we will return the solution in a single pass ( We have to run a single loop only  )only

 ========== DUTCH NATIONAL FLAG ALGORITHM ==========
 --- In this algorithm We use 3 POINTERS of which they are (low , mid , high)--- Pointers
 --- Algorithm approach is that we store 0s from (0 to low-1)
                                         1s from (low to mid-1)
                                         2s from (high+1 to n-1)
         and the gap from mid to high (we place the unsorted elements the intial nums array here)
           on this unsorted element we eun the loop and as the loop progress we inc the mid and decrease the high like compressing it unti mid==high


*/

class Solution
{
public:
    void array_sort(vector<int> &nums)
    {
        int n = nums.size();
        int mid = 0, high = n - 1, low = 0; // In starting there will not be any divisons of 1s 0s and 2s rather low will converge with mid only
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            if (nums[mid] == 1)
            {
                mid++;
            }
            if (nums[mid] == 2)
            {
                swap(nums[high], nums[mid]);
                high--;
            }
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
