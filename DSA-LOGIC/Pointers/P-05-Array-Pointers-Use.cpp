#include<iostream>
using namespace std;
/*
------> Array Pointer is also called a Constant Pointer-- means if ek baar koi value aake store ho gayi then it cannot be changed throughout the program



*/

int main(){
    int arr[] = {1 , 2 , 3 , 4 , 5};

    cout<<arr<<endl; // Array is a pointer only 

    cout<<*arr<<endl; // This will give the value stored at index 0 in arr
   
return 0;
}
