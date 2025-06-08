/*Given a number n, the task is to return the count of digits in this number.

Input: n = 1567
Output: 4
Explanation: There are 4 digits in 1567, which are 1, 5, 6 and 7.*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int count = 0;

    while(n>0){

        count=count+1;
        n= n/10;
    }

    cout<<count;

    return 0;
}


/*
This program counts the number of digits in a given number.

If the number is small, we can take it as an int and divide by 10 until it's 0 to count digits.

But for very large numbers (like 12345678901234567890), int can't store them,
so we take the number as a string and use its length to count digits.

code snippet :-
main(){
    
    string n;
    
    cout<<"Enter the n: "<<endl;
    cin>>n;
    
    int count = n.length();
    
    cout<<"Count: "<< count;
    
    return 0;
}
    
*/
