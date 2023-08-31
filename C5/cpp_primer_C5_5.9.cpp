#include <iostream>

using namespace std;

/* Exercise 5.9
 * Write a program using a series of if statements
 * to count the number of vowels in text read from cin.
 *
 */

int main()
{
    char input{};

    int output_a{ 0 };
    int output_e{ 0 };
    int output_i{ 0 };
    int output_o{ 0 };
    int output_u{ 0 };


    while (cin >> input)
    {
        if (input == 'a') ++output_a;
        else if (input == 'e') ++output_e;
        else if (input == 'i') ++output_i;
        else if (input == 'o') ++output_o;
        else if (input == 'u') ++output_u;
    }

    cout << "a count : " << output_a << endl;
    cout << "e count : " << output_e << endl;
    cout << "i count : " << output_i << endl;
    cout << "o count : " << output_o << endl;
    cout << "u count : " << output_u << endl;

    return 0;
}
