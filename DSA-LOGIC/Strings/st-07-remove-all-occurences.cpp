#include<iostream>
#include<vector>
#include<string>
using namespace std;
 /*
  --------- REMOVE ALL OCCURENCES OF THE GIVEN STRING -----
     -- Example = s = "daabcbaabcbc"  part = "abc"
     we have to check the par in the string s and then remove those part from the s

     So for these we have some of the STL functions 
     1 - string.find(substring of the given string) ---> this gives the starting position :::
 
 
 */
int main()
{
    cout<<"--==--==--==--== CODE COMMENCING ==--==--==--==--=="<<endl;
    string s = "daabcbaabcbc";
    string part = "abc";
    
    // While string lenght is > 0 then everytime find the part and if the part is lesser that the lenght of the string
    // then remove that part and do this continously and finally give back the string
    while (s.length()>0 && s.find(part) < s.length())
    {
        s.erase(s.find(part) , part.length());
    }
    
    cout<<s;
   
return 0;
}
