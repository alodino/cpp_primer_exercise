#include <iostream>
#include <vector>

using namespace std;

/* Exercise 3.24
 * Redo the last exercise from 3.3.3 using iterators.
 * 
 * " Read a set of integers into a vector.
 *   Print the sum of each pair of adjacent elements.
 *   Change your program so that it prints the sum of the first and last elements,
 *   followed by the sum of the second and second-to-last, and so on."
 * 
 */

int main()
{
    vector<int> vector_int{};
    int input{};

    while (cin >> input)
        vector_int.push_back(input);

    for (auto it = vector_int.cbegin(); it != (vector_int.cend() - 1); it++)
        cout << *it + *(it + 1) << endl;

    auto it_opp = vector_int.cend() - 1;
    for (auto it = vector_int.cbegin(); it <= it_opp; it++)
    {
        cout << *it + *it_opp << endl;
        it_opp--;
    }

    return 0;
}
