#include <iostream>
using namespace std;
/*
---- Aliases Changing the value of without using pointers
*/

void Change_Value(int &b) // Here important to note that here & is not storing the address rather it is the alias
                          // And b is new valriable that is assigned for b but inside memory it is pointing to the same address of a
{
    b = 20;
}

int main()
{
    int a = 10;

    Change_Value(a); // Simply we are passing the value of a
    cout << "The value of a after using aliases is " << a << endl;

    return 0;
}
