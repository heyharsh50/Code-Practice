//structure in C++
#include<iostream>
using namespace std;

typedef struct emp {
    int id;
    string name;
    float salary;

}ep;

int main(){
   
    ep Harsh;
    Harsh.id = 1;
    Harsh.name = "Harsh Raj";
    Harsh.salary = 1000.00;
    cout << "Id: " << Harsh.id << endl;
    cout << "Name: " << Harsh.name << endl;
    cout << "Salary: " << Harsh.salary << endl;
    return 0;
}