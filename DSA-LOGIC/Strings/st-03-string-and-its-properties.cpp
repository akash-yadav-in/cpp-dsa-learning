#include<iostream>
#include<string>
using namespace std;

/*
--------- 01 -- STRINGS -----------
- Dynamic In nature  like vectors it can change its size autmatically like vectors changes the size



*/

int main()
{
    string str1 = "Hello";  // Creating string
    
    string str2 = ",World";

    cout<<(str1 + str2)<<endl; // catenation like combinitng string 1 and 2
    cout<<endl;

    cout<<"------- Comparing string 1 and string 2 --------"<<endl;
    cout<< (str1==str2)<<endl; // Return bool if 1 or 0  it check it using lexicographycally like dictonary wise
    cout<<"String-length : "<<str1.length()<<endl; // this tell the length

    cout<<"Taking Inputs In a  string "<<endl;
    
    cout<<"Enter the string 1 value "<<endl;
    getline(cin, str1  );  // This way we can take the input of the string and here $ is the delimiter

    cout<<str1<<endl;

    for(char value : (str1+str2))
    {
        cout<<value<< " ";
    }
    
    

   
return 0;
}
