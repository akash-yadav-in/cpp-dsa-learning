#include <iostream>
#include <vector>
using namespace std;
/*
-------------- BINARY SEARCH----------------
1- Applied on Vectors or arrays in sorted ones(meaninig those are either in ascending or descending order)
2- To protect Ouselves from overflow condition we use the formula of ---->     MID = (START + (END-START)/2)
3- Time complexity is O(log n)
*/
class Solutions
{

public:
    int Binary_search_Half_Approach(vector<int> &arr, int target)
    {

        int st = 0;
        int end = arr.size() - 1;

        while (st <= end)

        {
            int middle = st + (end - st)/2;

            if (target > arr[middle])
            {
                st = middle + 1;
            }
            else if (target < arr[middle])
            {
                end = middle - 1;
            }
            else
            {
                return middle;
            }
        }
        return -1;
        
    }
};

int main()
{
    vector<int> arr = {-1, 0, 3, 4, 5, 9 ,  12};

    Solutions c;
    cout << c.Binary_search_Half_Approach(arr, 12) << endl;

    return 0;
}
