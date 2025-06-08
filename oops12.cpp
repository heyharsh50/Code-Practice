// Example program for Parameterized constructor
// Parameterized constructor accepts 2 parameters i.e. x,y
#include <iostream>
using namespace std;

class Point
{

    int a, b;

public:
    Point(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {

        cout << "The point is: " << "( " << a << ", " << b << " )" << endl;
    }
};

int main()
{
    Point p(1, 4);
    p.display();

    Point q(4, -1);
    q.display();

    return 0;
}