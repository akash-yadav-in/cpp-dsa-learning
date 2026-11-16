#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
/*
------ Revresing a character array -------
 -- Using the two pointer Approach Method

*/


int main()
{
    char array[6] = {'a' , 'k' , 'a' , 's' , 'h' , '\0'};
    int start = 0;
    int end = strlen(array) - 1;
   
    while (start< end)
    {
      swap(array[start] , array[end]);
      start++;
      end--;
    
    }
    for(char val : array)
    {
        cout<<val;
    }
    
    
      


    
    
   
return 0;
}
