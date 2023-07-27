#include <iostream>
#include <vector>

using namespace std;

/* Exercise 3.25
 * Rewrite the grade clustering program from 3.3.3 using iterators instead of subscripts.
 *
 */

int main()
{
    vector<int> score_input {};
    vector<int> score_output(11, 0);

    int input{};

    while (cin >> input)
        score_input.push_back(input);

    for (auto& i : score_input)
    {
        auto it = score_output.begin();
        auto score_split = i / 10;
        it += score_split;
        (*it)++;
    }

    for (auto& i : score_output)
        cout << i << " ";

    cout << endl;

    return 0;
}
