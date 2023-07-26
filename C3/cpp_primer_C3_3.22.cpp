#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

/* Exercise 3.22
 * Revise the loop that printed the first paragraph in text to
 * instead change the elements in text that correspond to the first paragraph to all uppercase.
 * After you've updated text, print its contents.
 * 
 */

int main()
{
    vector<string> text{"this is the test code"};

    for (auto it = text.begin(); it != text.end() && !it->empty(); it++)
    {
        for (char& c : *it)
            c = toupper(c);
    }

    for (auto it = text.cbegin(); it != text.cend() && !it->empty(); it++)
        cout << *it << endl;

    return 0;
}
