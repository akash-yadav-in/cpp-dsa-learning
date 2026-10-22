#include <iostream>
#include <vector>
using namespace std;

// STL 
// Vectors Functions Erase and insert are costly functions as they have time complexity of O(N)

int main()
{
    vector<int> vec = {1 , 2 , 3 , 4 , 5};

     vec.erase(vec.begin()); // 1 - this is erase function that will erase the element ----->But this is limitation that its time complexity is O(n) ---> as compared to before 
                            // functions where the time complexity was constant = O(1)

     vec.erase(vec.begin()+2); // 2 - If we want to remove element at index 2 we will simply put (vec.begin() + 2)-- here that means that now our beign will point at index 2 element 
    
     // vec.erase[start , end ); -----> with this we can erase a range of element by passing the start and end  here this will delete start element but not the ending but before just the ending element
     // Erase and clear functions change the size of the vector but the capacity remains the same 


     // 3 - Using Insert function we can insert element at any index 
     vec.insert(vec.begin()+ 2 , 100);  // This way is represent that we are inserting the value 100 in the vect at index 2 

     // 4 - we can use clear function that clear all the elements in the vector but capacity remains the same
     //  vec.clear();

     // 5 - We can use Empty to check wheter our vector is empty or not
     cout<<"Is Empty = "<<vec.empty()<<endl;


     // Checking the change in the vector
     for(int value : vec)
     {
        cout<<value<<endl;
     }                        
    

    return 0;
}
