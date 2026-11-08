#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
======== Next_permutation =========
Syntax =  = next_permutation(v.begin() , v.end());


*/

int main()
{
    string s = "bca";
    next_permutation(s.begin(), s.end()); // this helps to get the next permutation
    cout << "Next - Permutation is ---> " << s << endl;

    prev_permutation(s.begin(), s.end()); // this helps to get the previous permutation
    cout << "Previous - Permutation - - - > " << s << endl;

    return 0;
}
