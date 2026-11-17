#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
/*
====--- Purpose to check Palindrome ---====
  -  Conditions of the questions
   - You only have to check the alpha-numeric character that is special charcter you have to neglect
   - You Have to Take the A and a as same only

   -- first problem solution is to convert all the characters in the lower case that can be done using
     -- to lower(string name)

   -- The Second problem Solution is to remove the special characters

   -- time complexity id O(n)

*/

bool isAlphanumeric(char ch)
{
  if ((ch >= '0') && ch <= '9' || (tolower(ch) >= 'a' && (tolower(ch) <= 'z')))
  {
    return true;
  }

  return false;
}

int main()
{
  string name;
  cout << "Enter the string you Want to check Palindrome " << endl;
  getline(cin, name);
  string backup = name;

  int st = 0, end = name.length() - 1;
  while (st < end)
  {
    if (!isAlphanumeric(name[st]))
    {
      st++;
      continue;
    }
    if (!isAlphanumeric(name[end]))
    {
      end--;
      continue;
    }

    if (tolower(name[st]) != tolower(name[end]))
    {
      cout << false;
    }
    st++;
    end--;
  }
  cout<< true;

  return 0;
}
