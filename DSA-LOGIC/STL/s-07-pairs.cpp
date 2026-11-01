#include <iostream>

using namespace std;
/*
         ========== Pair ===============
         when we have to store two value at the same time
         example = pair<int , int > p = {3 , 5};
         and we dont need to include anything for this

*/

int main()
{
    pair<int, double> p = {12, 12.33}; // Creating the pair

    cout << p.first << endl; // Accessing the first value in the pair
    cout << p.second << endl;

    cout << "------- Pairs-Of-Pairs-------------" << endl;

    pair<int, pair<int, int>> pairs_of_pairs = {1, {2, 4}}; // way of creatinf pairs_or_pairs of intger

    cout << pairs_of_pairs.first << endl;
    cout << pairs_of_pairs.second.first << endl;
    cout << pairs_of_pairs.second.second << endl;

    return 0;
}
