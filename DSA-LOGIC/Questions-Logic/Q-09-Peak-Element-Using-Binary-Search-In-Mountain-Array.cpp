#include <iostream>
#include <vector>
using namespace std;
/*
-------------- Peak Index In Mountain Array ----------------
 example arr = {0 , 3 , 8 , 9 , 5 , 2}
 ===============> so here the element 9 is called a peak element because
            9 se pehle saare inc orger mein hain and 9 ke baad saare decreaing order

    CHARACTERSTICS OF MOUNTAIN ARRAY
    1- the Earlier element of the  array in the mountain array will be lesser and after this element also the  values are smaller

    2- In a MOUNTAINED ARRAY  1st and the last element can never be a peak element

    --- we will be using binary search APPROACH


*/
class Solutions
{

public:
    int Peak_index_mountain_array(vector<int> &arr, int target)
    {
        int st = 0;
        int end = arr.size() - 1;

        while (st <= end)
        {
            int mid = st + (end - st) / 2; // here we found the middle

            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) // we are checking that if the the middle is the peak element then retun the middle as the answer
            {
                return mid;
            }
            else if (arr[mid - 1] < arr[mid]) // else we are cheking that if middle ke pehle wala elment smaller then middle hai and aince middle is not the peak element then  the peak element is in right side
            {
                st = mid + 1; // that's why we updated the start from middle to moddle + 1 element
            }
            else

            {
                end = mid - 1; // else if middle is not in the right side then it will be on the left side
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> arr = {0, 3, 8, 9, 5, 2};

    Solutions c;
    cout << c.Peak_index_mountain_array(arr, 0) << endl;

    return 0;
}
