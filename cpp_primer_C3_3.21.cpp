#include <iostream>
#include <vector>

using namespace std;

/* Exercise 3.21
 * Redo the first exercise from 3.3.3 using iterators
 * " Write a program to print the size and contents of the vectors from exercise 3.13.
 * Check whether your answers to that exercise were correct.
 * If not, restudy 3.3.1 until you understand why you were wrong.
 * 
 * " vector<int> v1;
 *   vector<int> v2(10);
 *   vector<int> v3(10, 42);
 *   vector<int> v4{10};
 *   vector<int> v5{10, 42};
 *   vector<string> v6{10};
 *   vector<string> v7{10, "hi"};
 *
 */

void print_int(vector<int> input)
{
    if (input.cbegin() != input.cend())
    {
        cout << "Size - " << input.size() << endl;
        cout << "Element - \n";

        for (auto it = input.cbegin(); it != input.cend(); ++it)
            cout << *it << " ";
    }

    else
    {
        cout << "size : " << input.size() << endl;
        cout << "Element - \n";
        cout << "input is empty string" << endl;
    }

    cout << "\n" << endl;
}

void print_string(vector<string> input)
{
    if (input.cbegin() != input.cend())
    {
        cout << "Size - " << input.size() << endl;
        cout << "Element - \n";

        for (auto it = input.cbegin(); it != input.cend(); ++it)
            cout << *it << " ";
    }

    else
    {
        cout << "size : " << input.size() << endl;
        cout << "Element - \n";
        cout << "input is empty string" << endl;
    }

    cout <<"\n" << endl;
}

int main()
{
vector<int> v1;                 // size 0    | element : none           -> size 0    | element : none
vector<int> v2(10);             // size 10   | element : each 0         -> size 10   | element : each 0
vector<int> v3(10, 42);         // size 10   | element : each 42        -> size 10   | element : each 42
vector<int> v4{10};             // size 1    | element : 10             -> size 1    | element : 10
vector<int> v5{10, 42};         // size 2    | element : 10, 42         -> size 2    | element : 10, 42
vector<string> v6{10};          // size 10   | element : each 0         -> size 10   | element : each " "
vector<string> v7{10, "hi"};    // size 10   | element : each "hi"      -> size 10   | element : each "hi"


print_int(v1);
print_int(v2);
print_int(v3);
print_int(v4);
print_int(v5);

print_string(v6);
print_string(v7);

return 0;
}
