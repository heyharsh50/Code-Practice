/*Given a number x, determine whether the given number is Armstrong’s number or not.
    A positive integer of n digits is called
    an Armstrong number of order n (order is the number of digits) if

abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

Here a, b, c and d are digits of input number abcd…..

Input:153
Output: Yes
Explanation: 153 is an Armstrong number, 1*1*1 + 5*5*5 + 3*3*3 = 153*/

#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter the number: " << endl;
    cin >> n;

    int dup = n;
    int sum = 0;

    while (n > 0)
    {

        int ld = n % 10;

        sum = sum + (ld * ld * ld);

        n = n / 10;
    }

    if (sum == dup)
    {

        cout << "Armstrong Number!! " << endl;
    }
    else
    {
        cout << "Not a Armstrong Number!! " << endl;
    }
    return 0;
}