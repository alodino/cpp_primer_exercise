#include <iostream>

using namespace std;

/* Exercise 5.3
 * Use the comma operator to rewrite while loop from 1.4.1
 * so that is no longer requires a block.
 * Explain whether this rewrite improves or diminishes the readability of this code.
 * 
 */

int main()
{
    int sum = 0, val = 1;

    // previous statement with block
    while (val <= 10)
    {
        sum += val;
        ++val;
    }

    cout << "Original Statement Ouput : " << sum << endl;

    sum = 0, val = 1;

    // rewritten statement without block
    while (val <= 10) sum += val, ++val;

    cout << "Rewritten Statement Output : " << sum << endl;

    return 0;
}

/* Since previous statement's while block only had two statements,
 * rewrite didn't seem to be drastically less readible in my perspective.
 * However, only using comma operator without blocks will definitely
 * diminish overall readability of the code.
 */
