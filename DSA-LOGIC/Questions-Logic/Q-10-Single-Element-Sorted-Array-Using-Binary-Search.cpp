#include <iostream>
#include <vector>
using namespace std;
/*
-------------- Single Element Sorted Array ----------------
example arr = {1 ,1 ,2 , 3 ,3 ,4, 4}
     Here only 2 appears only one time and this will be answer as well
     Here we will be using BINARY SEARCH
     Though there can be mutiliple ways like linear search or bitwise operator but in those cases the time complexity will be O(n) approximately in both the cases

     And One more Important thing that is only 2 times repeat by other elements

     1 -- jo bhi array is question mein diya jayega will always be of odd size array
       ----> and odd size ke array ka mid will carry equal no of element on left and right side

-------------------- EVEN CASE -------------------------
 // ---------------------------  BELOW IS THE CONDITION FOR IF EVEN NUMBER OF ELEMENTS ON EITHER SIDE OF THE MIDDLE  -----------------------------
                // ------ > MOST IMPORTANT CONCEPT that is since every element is coming 2 times in that array so the total size of ther array will be even in the end
                // Since the even part or side will never have single element the odd part or side will have it
                // so we will serch for sorted one on that side
                // since we have got the middle value and on both sides of the middle value will be even number so we check
                // that jis side pe middle value match ho rahi either left or right  then that side will contain now odd numbers of element as one of the n elements on one side is duplicate as the middle
                // so now on that side will contain the single element say 4 elements were there on right side after comaring ad getting we git that on of those 4 element was same as the middle value
                // then remianing becomes 3 elemts in which 2 will be same and one will be diffrent and thsi 1 element will be single element

                else if (arr[mid] == arr[mid - 1])


--------------------------- ODD CASE -----------------------

                // ----------------------  BELOW IS NOW THE CASE IF ON BOTH SIDE ODD NUMBER OF ELEMENTS PRESENT ON THE EITHER SIDE OF MIDDLE VALUE
                // example 3 , 3, 7 , 7 , 10 , 11 , 11    now here mid will be 7 and n ow if we check on left side 7 and 7 will make a paire and left 3 , 3 will also make pair
                // that is if the element on the side whic will match with the middle value will not be contaning the SINGLE ELEMENNT


*/
class Solutions
{

public:
    int Single_Element_Sorted_Finder(vector<int> &arr)
    {
        int st = 0;
        int end = arr.size() - 1;

        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            if (mid % 2 == 0) // even case EXPLANATION OF LOGIC IS ABOVE
            {
                if (arr[mid] == arr[mid - 1])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else if (mid % 2 != 0) // odd case EXPLANATION OF LOGIC IS ABOVE
            {
                if (arr[mid] == arr[mid - 1])
                {
                    st = mid + 1;
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
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    Solutions c;
    cout << c.Single_Element_Sorted_Finder(arr) << endl;

    return 0;
}
