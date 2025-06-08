// static data members and member functions
#include<iostream>
using namespace std;

class counter{
    static int count;       //Static data member shared among all objects

    public:
        void increment(){
            count++;
            cout << "Count: " << count << endl;
        }

        static int getCount(){              //Static member function
            return count;                //Can access static data members directly
        }

};
int counter::count = 0; // static data member definition
int main(){

    counter c1, c2, c3, c4;
    c1.increment();
    c2.increment();
    c3.increment();
    c4.increment();

    //Accessing static function using class name
    cout << "Count: " << counter::getCount() << endl;

    return 0;
}