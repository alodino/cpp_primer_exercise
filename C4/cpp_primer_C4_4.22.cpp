#include <iostream>

using namespace std;

/* Exercise 4.22
 * Extend the program that assigned high pass, pass, and fail grades to 
 * also assign low pass for grades between 60 and 75 inclusive.
 * Write two versions :
 * One version that uses only conditional operators;
 * the other should use one or more if statements.
 * Which version do you think is easier to understand and why?
 * 
 */

int main()
{
    int score{};

    cin >> score;

    // case 1 : using only conditional operators
    cout << ((score > 90) ? "high pass" :
                (score > 75) ? "pass" :
                   (score >= 60) ? "low pass" : "fail") << endl;
    
    // case 2 : using one or more if statements

    if (score > 90)
        cout << "high pass";
    else if (score > 75)
        cout << "pass";
    else if (score >= 60)
        cout << "low pass";
    else
        cout << "fail";

    cout << endl;
    
    return 0;
}

/* In my opinion, the version used if statements is much easier to understand.
 * While conditional operator version is nested multiple time which makes the code less readable,
 * if statements divides the cases distinctivly by using if/else for each output case, which leads to better understanding.
 * 
 */
