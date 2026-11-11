#include<iostream>
#include<string>
#include<cstring>
using namespace std;

/*
===== INPUT AND OUTPUT OF THE STRING =======
- We can take input inside the string using ---> suntax -------> cin.getline(string , lenght , delim)
   -- delim is the optional parameter--->  use to stop the input when somthing like full stop or like dollar is pressed bu user 
   --- Whilw taking input we alredy predefine the space or place for null charaacter 
*/
int main()
{
    char string[10];  
    cout<<"Enter The String "<<endl;
   
    // cin>>string; Whenever there is a space in between the string then the cin function ignoers the words or character after the space
   
    cin.getline(string , 10 ,'$' ); // At the pace of cin>> we use this function
    
    
    cout<<"OUTPUT ----->  " <<string<<endl; // Output all at once

    cout<<endl;
    // If we want to print each and every charater
    for(char ch :string)
    {
        cout<<ch <<" ";
    }
    cout<<endl;
    
   

return 0;
}
