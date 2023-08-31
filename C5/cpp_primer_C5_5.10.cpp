#include <iostream>

using namespace std;

/* Exercise 5.10
 * There is one problem with our vowel-counting program as we've implemented it :
 * It doesn't count capital letters as vowels.
 * Write a program that counts both lower- and uppercase letters as the appropriate vowel
 * - that is, your program should count both 'a' and 'A' as part of aCnt, and so forth.
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
        switch(input)
        {
            case ('a'): ++output_a; break;
            case ('A'): ++output_a; break;

            case ('e'): ++output_e; break;
            case ('E'): ++output_e; break;

            case ('i'): ++output_i; break;
            case ('I'): ++output_i; break;

            case ('o'): ++output_o; break;
            case ('O'): ++output_o; break;

            case ('u'): ++output_u; break;
            case ('U'): ++output_u; break;

        }
    }

    cout << "a count : " << output_a << endl;
    cout << "e count : " << output_e << endl;
    cout << "i count : " << output_i << endl;
    cout << "o count : " << output_o << endl;
    cout << "u count : " << output_u << endl;

    return 0;
}
