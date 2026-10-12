#include <iostream>
using namespace std;
/* Null Pointer
 1- Used in Linked list and  , Trees
 2- We cannot derefrence Null Pointer as that is not pointing a valid memory location and give a error a Segmentation fault
 
*/

int main()
{
    // Pointer not Pointing any Location
    int* ptr = NULL;
    cout << "NULL pointer value " << ptr << endl;

    return 0;
}
