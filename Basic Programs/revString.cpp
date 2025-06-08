// Reverse string without in-built fun()
#include <iostream>
using namespace std;
int main()
{

    string str;

    cout << "Enter a string to reverse: " << endl;
    cin >> str;

    // int n = str.length();       // --------> str.length() is an inbuilt (standard library) function in C++.

    int n = 0;

    while (str[n] != '\0')
    {
        n++;
    }

    for (int i = 0; i < n / 2; i++)
    {

        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    cout << "Reverse string: " << str << endl;

    return 0;
}