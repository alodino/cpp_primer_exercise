#include<iostream>
#include<vector>

using namespace std;

/* Exercise 3.23
 * Write a program to create a vector with ten int elements.
 * Using an iterator, assign each element a value that is twice its current value.
 * Test your program by printing the vector.
 * 
 */

int main()
{
    vector<int> input {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto it = input.begin(); it != input.cend(); it++)
    {
        *it *= 2;
        cout << *it <<" ";
    }
    cout << endl;

    return 0;
}
