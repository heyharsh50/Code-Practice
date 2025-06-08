//Swap two numbers using temp

#include <iostream>
using namespace std;

int main() {
  // your code goes here

    int a, b, temp;

    cout<<"Enter the value of a & b: "<<endl;
    cin>>a>>b;

    cout<<"Before swapping the value of a: "<< a <<" b: "<< b <<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping the value of a: "<< a <<" b: "<< b <<endl;

  return 0;
}


/* swap three numbers using temp

  temp = a;
    a = b;
    b = c;
    c = temp;
*/