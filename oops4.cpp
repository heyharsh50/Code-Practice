//scope resolution operator :: and nesting of member functions
#include<iostream>
using namespace std;

class sample{
    private:
    int a, b, c;
    public:
    void read();
    void display();
};

void sample::read(){            //scope resolution operator used because read() is defined outside the class
    a = 10;
    b = 20;
    c = 30;
}

void sample :: display(){
    read();                             // calling read() function inside display() function without dot operator
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int main(){

    sample s1;
    s1.display();
    return 0;
}