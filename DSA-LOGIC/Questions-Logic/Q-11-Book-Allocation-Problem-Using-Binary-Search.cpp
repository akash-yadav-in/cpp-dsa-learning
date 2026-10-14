#include <iostream>
#include <vector>
using namespace std;
/*
----------------- BOOK ALLOCATION PROBLEM -----------------------

   ====> USEFUL INFORMATION
    CONDIDTIONS TO FOLLOW
    1- ALL THE BOOKS MUST BE ALLOCATED TO THE STUDENTS
    2- EACH STUDENT HAS TO BE GIVEN AT LEAST ONE BOOK
    3- ALLOTEMENT SHOULD BE CONTIGOUS (means if there are 4 books and 2 studnets you can give  3 books to student 1 and the 4th book to student 2)

----- ON THE BASIS OF THIS WE HAVE TO CALCULATE AND GIVE THE MIN NUMBER OF POSSIBLE NUMBER
----===> the array given below are the no of pages of the books
-------> And in the case where the number of books is less than the number of the students then allocations of books cannot be possible


================================================ LOGIC ===================================================

--- >  We cannot apply BINARY SEARCH ON NUMBER OF PAGES SO WE MAKE THE RANGE THAT IS FROM 0 TO SUM OF ALL THE PAGES THIS WILL BE THE RANGE OF THE SOLUTIONS AND HERE THE ANSWER WILL EXIST SO ON THIS RANGE WE WILL APPLY BINARY SEARCH
 --- >  THEN we will find the mid value

 ===================================== MAIN BINARY SEARCH LOGIC =========================================

 --- >  after that we will check whether that mid is ( VALID OR INVALID )
 --- >  If VALID then we will in the left part ----> because we want to check whether there is smaller solution than  this exist or not
 --- >  If Its INVALID then we will check for a valid solition that cannot exist in left part so we will check it in Right part of the search index

 ===================================== FUNCTION TO CHECK FOR VALID AND INVALID SOLUTION LOGIC ===================
  ===> COLLETING ALL THE info we have mid , then no of students , then no of mac pages in original arr = 4
   ---- we can check this using the loop


*/

class Solutions
{
public:
   // =============================================== FUNCTTION 1  BELOW  TO CHECK THE IS VALID MID OR NOT ==================================================

   bool isValid(vector<int> &arr, int n, int m, int mid) // this is the another function to check for isValid or  not case
   {
      int student = 1, pages = 0;
      for (int i = 0; i < n; i++)
      {
         if (arr[i] > mid) // here we are returning false because we have to find the min value possible than the mid value
         {
            return false;
         }

         if (pages + arr[i] <= mid) // agar pages aur use i per jo element ki value ka sum less than or equal to mid ho then
                                    // ek tarah se students ko allocated ho jayega
         {
            pages += arr[i];
         }
         else // if not the  hum students ko increase karna padega as studens are less and pages more ho gaye and pages ko bhi reset karke arr[i] uss i pe jo value hai uske barabar rak denge
         {
            student++;
            pages = arr[i];
         }
      }
      if (student > m)
      {
         return false;
      }
      else
      {
         return true;
      }
   }

   // ==================================== FUNCTION 2 BELOW FOR BINARY SEARCH AND SUM OF ALL ELEMNTS OF ARRAY ==========================================

   int Book_Allocation_Problem(vector<int> &arr, int n, int m)
   {
      if (m > n) // this is the edge case when students are more than the number of the books then it is not possible to give books to all students in contigous manner
      {
         return -1;
      }

      // === Here we have found the total sum of the array so that we can apply the Binary Search on it ====

      int sum = 0;
      for (int i = 0; i < n; i++)
      {
         sum += arr[i];
      }

      // === Here Below we are Binary search On that sum range We Found ====
      int start = 0, end = sum;

      int ans = -1; // Here we are storing the valid answer in this variable and after all the operations we will return this answer in the end

      while (start <= end)
      {
         int mid = start + (end - start) / 2;

         if (isValid(arr, n, m, mid)) // If the answer is valid we will go to left and check for smaller valid answer
         {
            ans = mid;
            end = mid - 1;
         }
         else // If the answer is invalid the we will go to right of mid to first find a valid answer
         {
            start = mid + 1;
         }
      }
      return ans;
   }
};
int main()
{
   vector<int> arr = {2, 1, 3, 4};
   int n = 4, m = 2;
   Solutions c;

   cout << c.Book_Allocation_Problem(arr, n, m) << endl;

   return 0;
}
