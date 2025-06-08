#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the value of a & b: "<<endl;
    cin>>a>>b;
    cout<<"before swapping the value of a: "<<a<<" b: "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping the value of a: "<<a<<" b: "<<b<<endl;
    return 0;
}

/*  for swapping three numbers without using third variable 

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);
*/