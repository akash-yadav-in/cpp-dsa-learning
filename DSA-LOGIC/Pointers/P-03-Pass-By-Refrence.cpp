#include <iostream>
using namespace std;
/*
----- Pass By Refrence
     Way of passing the int or cahr or any value originally and not any copy of that value
     this can be done using the pointers
     HOW WE DO IT--- say we have int a = 10 ----> we pass the memory address of a = &a
*/

void Change(int *ptr) // Here we have defined the pointer that store the address of a
{
    *(ptr) = 20; // Here we have derefrenced the pointer and change tha value from 10 to 20
}

int main()
{
    int a = 10;

    Change(&a); // Here we have passed the address of a into the Change Function
    cout << "The Value of a After Passing By Refrence is " << "---> " << a;

    return 0;
}
