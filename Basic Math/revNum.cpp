/*Given an Integer n, find the reverse of its digits.

Input: n = 122
Output: 221
Explanation: By reversing the digits of number, number will change into 221. */

#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter the number for reverse: "<<endl;
    cin>>n;

    int rev = 0;

    while(n>0){

        int ld = n % 10;

        rev = (rev * 10) + ld;

        n = n/10;

    }

    cout<<rev;

    return 0;
}