/*Check if a String is a Palindrome Without Using Built-in Functions in C++*/

#include<iostream>
using namespace std;
int main()
{
    string str;

    cout<<"Enter the string: "<<endl;
    getline(cin, str);

    string dup = str;

    int n = str.length();
    

    for(int i=0; i < n/2; i++){

        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;

    }

    if(str == dup ){

        cout<<"Palindrome!! "<<endl;

    }
    else{

        cout<<"Not palindrome!! ";

    }

    return 0;
}