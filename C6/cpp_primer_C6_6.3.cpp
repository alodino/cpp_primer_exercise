#include <iostream>

using namespace std;

/* Exercise 6.3
 * Write and test your own version of fact.
 *
 */

int fact(int);

int main()
{
    int input{};

    while (cin >> input)
        cout << "Factory - " << input << " : " << fact(input) << endl;
}

int fact(int input)
{
    int output = 1;

    if (input == 0)
        return 1;
    else
    {
        for (; input != 1; --input)
            output *= input;
    }

    return output;
}
