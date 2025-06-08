/*Given an integer n, find whether the number is Palindrome or not.
     A number is a Palindrome if it remains the same when its digits are reversed.

Input: n = 12321
Output: Yes
Explanation: 12321 is a Palindrome number because after reversing its digits,
    the number becomes 12321 which is the same as the original number.*/

#include<iostream>
using namespace std;
int main()
{
     int n;

     cout<<"Enter number to check palindrome: "<<endl;
     cin>>n;

     int dup = n;

     int rev = 0;

     while(n>0){

          int ld = n % 10;

          rev = (rev * 10) + ld;

          n = n / 10;
     }

     if(rev == dup){
          cout<<"Palindrome!! "<<endl;
     }
     else{
          cout<<"Not Palindrome!! "<<endl;
     }

     return 0;
}