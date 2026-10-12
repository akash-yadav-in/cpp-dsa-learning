#include <iostream>
using namespace std;
/*
----- Here we are talking about Pointer Arithmetic
1--> Example is when the do ++a or a++ so in pointer arithmetic say this is a int type pointer then a+(int ke barabar memory store ho jayegi)
2--> IN C++ Addition of 2 pointers is not allowed but we can Subtract the Two pointers 

3---> IF we subtract 2 pointers then the answer is no of blocks that can come in between the two  types of  (int)


*/

int main()
{
    // Increment Or Decrement
    // int a = 1;

   
    // cout << "The value of ++a " << "is " << ++a << endl;
 
    // int *ptr = &a;
    // cout << ptr << endl;
    // ptr = ptr + 2; // This means that that we are adding 2 int ke bytes ke baraber memory => 8 bytes
    // cout << "The value of ptr++ is " << ptr<< endl; //+4 bytes hoga as int type pointer




    int arr[] = {1 , 2 , 3 , 4 , 5};

    cout<<*arr<<endl; //this will give output 1 that is value at index 0
    cout<<*(arr+1)<<endl; //this will give output 2 that is value at index 1
    cout<<*(arr+2)<<endl; //this will give output 3 that is value at index 2
    
    cout<<*(arr+2) - *(arr)<<endl; //this will give output 2 as actually this 2 is no of bytes between these same type of ints
   
    //Comparison Operators
    cout<<((arr) < (arr+1))<<endl;



    return 0;
}
