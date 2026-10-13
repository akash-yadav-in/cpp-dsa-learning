#include <iostream>
#include <vector>
using namespace std;
/*
-------------- SEARCH IN ROTATED SORTED ARRAY ----------------
EXAMPLE arr = {0 , 1 , 2 , 3 , 4 , 5} --=======> NOW Rotated ===>
        arr = {5 , 4 , 3 , 2 , 1 , 0} ==========> In this we have to search

        IMPORTANT -- CONCEPT TO NOTE WHILE USING BINARY SEARCH ON SORTED ARRAY
        ====> ONE HALF WILL BE SORTED IN THE ROTATED SORTED ARRAY IN NEIGHBOUR OF THE MIDDLE
*/
class Solutions
{

public:
    int Rotated_sorted_array(vector<int> &arr, int target)
    {
        int start = 0;
        int end = arr.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
            {
                return mid;
            }

            if (arr[start] <= arr[mid]) // Condition for left sorted ---> here if the starting element is smaller then the middle then left half is sorted and
                                        // Why is that becuase original array binary search is applied on sorted array either ascending or descending order
            {
                if (arr[start] <= target && target <= arr[mid]) // This conditiion is for left BInary search
                {
                    end = mid - 1;   // here we will update the end to be mid - 1 ----> so that the search can happen in the left
                }
                else
                {
                    start = mid + 1;   // otherwise the target is in right side
                }
            }
            else
            {
                if (arr[mid] <= target && target <= arr[end]) // Right sorted condition
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
    }
};

int main()
{
    vector<int> arr = {6, 7, 0, 1, 2, 3, 4, 5};

    Solutions c;
    cout << c.Rotated_sorted_array(arr, 0) << endl;

    return 0;
}
