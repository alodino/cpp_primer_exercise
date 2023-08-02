#include <iostream>
#include <string>
#include <cstring>

using namespace std;

/* Exercise 3.39
 * Write a program to compare two strings.
 * Now write a program to compare the values of two C-style character strings.
 * 
 */

int main()
{
    bool flag = true;

    string string_x = "Example String";
    string string_y = "Example String";

    if (string_x.size() == string_y.size())
    {
        auto it_x = string_x.begin();
        for (auto it_y = string_y.begin(); it_y != string_y.end(); it_y++)
        {
            if (*it_x != *it_y)
                flag = false;
            it_x++;
        }
    }

    else flag = false;

    if (flag == true)
        cout << "Same String" << endl;
    else
        cout << "Different String" << endl;

    flag = true;

    const char char_x[] = "Example String";
    const char char_y[] = "Example String";

    if (strlen(char_x) == strlen(char_y))
    {
        if (strcmp(char_x, char_y) != 0) flag = false;
    }

    else flag = false;

    if (flag == true)
        cout << "Same Char" << endl;
    else
        cout << "Different Char" << endl;

    return 0;
}
