//Passing object as function argument
#include <iostream>
using namespace std;

class Complex {
    int a;  // Real part
    int b;  // Imaginary part

public:
    void setData(int v1, int v2) {
        a = v1;
        b = v2;
    }

    // Passing objects o1 and o2 as function arguments to access their values
    void setDataBySum(Complex o1, Complex o2) {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber() {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    // Passing c1 and c2 as arguments (objects) to c3's setDataBySum function
    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}
