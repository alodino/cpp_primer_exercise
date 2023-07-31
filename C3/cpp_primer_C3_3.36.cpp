#include <iostream>
#include <iterator>
#include <cstddef>
#include <vector>

using namespace std;

/* Exercise 3.36
 * Write a program to compare two arrays for equality.
 * Write a similar program to compare two vectors.
 * 
 */

int main()
{
    bool flag = true;

    int array_x[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int array_y[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int* p_x = array_x;
    int* p_y = array_y;

    if (size(array_x) == size(array_y))
    {

        p_x = begin(array_x);
        for (p_y = begin(array_y); p_y != end(array_y); p_y++)
        {
            if (*p_y != *p_x) flag = false;
            p_x++;
        }
    }

    else flag = false;

    if (flag == true)
        cout << "Same Array" << endl;
    else
        cout << "Different Array" << endl;

    flag = true;
    vector<int> vector_x{};
    vector<int> vector_y{};
    int input_x{};
    int input_y{};

    cout << "Input data for first vector" << endl;
    while (cin >> input_x)
        vector_x.push_back(input_x);

    cin.clear();
    cin.ignore();

    cout << "Input data for second vector" << endl;
    while (cin >> input_y)
        vector_y.push_back(input_y);

    if (vector_x.size() == vector_y.size())
    {
        auto it_x = vector_x.begin();
        for (auto it_y = vector_y.begin(); it_y != vector_y.end(); it_y++)
        {
            if (*it_y != *it_x) flag = false;
            it_x++;
        }
    }

    else
        flag = false;

    if (flag == true)
        cout << "Same Vector" << endl;
    else
        cout << "Different Vector" << endl;

    return 0;
}
