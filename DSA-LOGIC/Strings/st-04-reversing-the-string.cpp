#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
--------- Aim to Reverse the string --------
 --- Method to reverse the string
     ---> Here Reversing the string is much easier than character array 
      ----> We can directly user reverse(str.begin() , str.end());


===------------====-------- POINTS TO REMEMBER IN STRINGS ------=====--------=====
1 - Char array
2 - C++ stl string
3 - Functions
4 - Reversing character array
5 - Reversing strings
6 - Input / Output / Operations

*/


int main()
{
    string name;
    cout<<"Enter the Character you want to reverse "<<endl;
    getline(cin , name );

    cout<<"-- YOUR REVERSED STRING IS -- "<<endl;
    reverse(name.begin() , name.end()); // Using this algorithm we can reverse the string
    cout<<name;
    
    
   
return 0;
}
