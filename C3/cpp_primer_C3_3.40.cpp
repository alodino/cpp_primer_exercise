#include <iostream>
#include <cstring>

using namespace std;

/*
 * Write a Program to define two character arrays initialized from string literals.
 * Now define a third character array to hold the concatenation of the two arrays.
 * Use strcpy and strcat to copy the two arrays into the third.
 *
 */

int main()
{
    char array_1[] = "First String Literal";
    char array_2[] = "Second String Literal";
    char array_3[100];
    
    strcpy_s(array_3, array_1);
    strcat_s(array_3, array_2);

    cout << array_3 << endl;

    return 0;
}
