#include <iostream>

using namespace std;

/* Exercise 6.5
 * Write a function to return the absolute value of its argument.
 * 
 */

double absolute(double);

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
