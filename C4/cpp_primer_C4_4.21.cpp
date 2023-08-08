#include <iostream>
#include <vector>

using namespace std;

/* Exercise 4.21
 * Write a program to use a conditional operator to find the elements in a vector <int>
 * that have odd value and double the value of each such element
 * 
 */

int main()
{
    int input{};
    vector<int> input_vec{};

    while (cin >> input)
        input_vec.push_back(input);

    for (auto i = input_vec.begin(); i != input_vec.end(); i++)
    {
        if (*i % 2 != 0)
            (*i) *= 2;
        cout << *i << " ";
    }

    cout << endl;
    return 0;
}
