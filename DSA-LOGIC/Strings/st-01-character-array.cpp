#include<iostream>
#include<string>
#include<cstring>
using namespace std;
/*
---- CHARACTER ARRAY -----
*/


int main()
{
    cout<<" All Properties And Output of String "<<endl;
    char string[] = {'a' , 'b' , 'c' , '\0'};   //  '\0' is called null character and takes 1 byte space
                                               //   we add null character to make the char string a valid string

   cout<<string <<endl;  // This tell the string
   cout<<strlen(string)<<endl; // This on tell string length -- here the null character is ignored and rest of the string comes up


   cout<<endl;
   cout<<"===== Properties of string lterals ======== "<<endl;
   char string_1[] = {"hello"}; // Here we have defined the string literals ----> like a word directly - Internally memory we get - {h , e , e  ,l , o}
   cout<<strlen(string_1)<<endl;
   cout<<"Value of the leeter sotred in string at index 5 is --> "<<string_1[4]<<endl;

return 0;
}
