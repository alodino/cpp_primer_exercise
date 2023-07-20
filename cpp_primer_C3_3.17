#include <iostream>
#include <vector>

using namespace std;

/* Exercise 3.17
 * Read a sequence of words from cin and store the values a vector.
 * After you've read all the words, process the vector and change each word to uppercase.
 * Print the transformed elements, eight words to a line.
 */

int main()
{
    vector<string> input_vec{};
    string input;

    while (cin >> input)
    {
        input_vec.push_back(input);
    }

    for (auto &i : input_vec)
    {
        for (auto& j : i)
        {
            j = toupper(j);
        }
    }

    for (decltype(input_vec.size())i = 0; i < input_vec.size(); i++)
    {
        cout << input_vec[i] << " ";

        if ((i + 1) % 8 == 0) cout << "\n";

    }

    cout << endl;

    return 0;
}
