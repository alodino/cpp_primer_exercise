#include <iostream>
#include "Chapter6.h"

using namespace std;

/* Exercise 6.8
 * Wirte a header file named Chapter6.h that
 * contains declarations for the functions
 * you wrote for the exercises in 6.1 (p. 205).
 * 
 */

// Exercise 6.5

int main()
{
    double input{};

    while (cin >> input)
    {
        cout << "[" << input << "] : " << absolute(input) << endl;
    }

    return 0;
}

double absolute(double input)
{
    double output = input;

    if (output < 0)
        output *= -1;

    return output;
}
