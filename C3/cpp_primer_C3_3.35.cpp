#include <iostream>
#include <iterator>

using namespace std;

/* Exercise 3.35
 * Using Pointers, write a program to set the elements in array to zero.
 *
 */

int main()
{
    int array_int[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* p = array_int;

    for (auto p = begin(array_int); p != end(array_int); p++)
        *p = 0;

    for (auto p = begin(array_int); p != end(array_int); p++)
        cout << *p << " ";

    cout << endl;

    return 0;
}
