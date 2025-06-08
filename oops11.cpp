//Parametrized Constructor
#include<iostream>
using namespace std;

class Complex{

    int a, b;

    public:
    Complex (int x, int y);
    
    void print(){

        cout<<"complex:"<< a << " + "<< b << "i" << endl;

    }

};

Complex :: Complex(int x , int y){      //Parameterized Constructor as it takes 2 parameters
    
    a = x;
    b = y;

}

int main()
{
    //Implicit Call
    Complex c1(4, 2);
    c1.print();

    //Explicit Call
    Complex a = Complex(9, 4);
    a.print();

    return 0;
}