#include <iostream>
#include <vector>
using namespace std;
/*
-------------- BINARY SEARCH----------------
1- Applied on Vectors or arrays in sorted ones(meaninig those are either in ascending or descending order)
2-



*/
class Solutions
{

public:
    int Binary_search_Half_Approach(vector<int> &arr, int target)
    {
        int n = arr.size() - 1;
        int left = 0;
        int right = n;

        while (left <= right)

        {
            int middle = (left + right) / 2;
            if (target == middle)
            {
                return middle;
            }
            else if (target > middle)
            {
                left = middle + 1;
            }
            else if (target < middle)
            {
                right = middle - 1;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};

    Solutions c;
    cout << c.Binary_search_Half_Approach(arr, 12) << endl;

    return 0;
}
