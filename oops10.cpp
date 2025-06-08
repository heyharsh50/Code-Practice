//Constructor
#include<iostream>
using namespace std;

class Complex{

    int a, b;

    public:
    Complex(void);  //Constructor declaration

    void Print(){
        cout<<"Your number: "<< a << " + " << b << "i" <<endl;
    }

};

Complex :: Complex(void){   // ---------> This is a default constructor as it takes no parameter

    a = 10;
    b = 2;
}

int main()
{   
    Complex c;

    c.Print();


    return 0;
}