// Constructor Overloading
#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    Complex()       //Default constructor
    {

        a = 0;
        b = 0;
    }

    Complex(int x, int y)   //Parameterized constructor
    {
        a = x;
        b = y;
    }

    Complex(int x);

    void dis()
    {

        cout << "Complex Number: " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x)    //Parameterized constructor
{
    a = x;
    b = 0;
}

int main()
{
    Complex c1(8, 2);
    c1.dis();

    Complex c2(6);
    c2.dis();

    Complex c3;
    c3.dis();

    return 0;
}