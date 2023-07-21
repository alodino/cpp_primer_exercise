#include <iostream>
#include <vector>

using namespace std;

/* Exercise 3.20
 * Read a set of integers into a vector.
 * Print the sum of each pair of adjacent elements.
 * Change your program so that it prints the sum of the first and last elements,
 * followed by the sum of the second and second-to-last, and so on.
 */

int main()
{
    vector<int> vector_int{};
    int input_int{};

    while (cin >> input_int)
        vector_int.push_back(input_int);

    cout << "Case 1 : Sum of Adjacents" << endl;

    for (decltype(vector_int.size()) i = 0; i < (vector_int.size()-1); i++)
    {
        cout << vector_int[i] + vector_int[i + 1] << endl;
    }

    cout << "Case 2 : Sum of Outers" << endl;

    decltype(vector_int.size()) size = vector_int.size();
    if (size % 2 != 0) size++;

    for (decltype(size) i = 0; i < (size / 2); i++)
    {
        cout << vector_int[i] + vector_int[vector_int.size() - i - 1] << endl;
    }

    return 0;
}
