#include<iostream>
using namespace std;

//Getter and Setter Example
class emp{
    private:
    int salary;

    public:
    void setSalary(int s){
        salary = s;
    }

    int getSalary(){
        return salary;
    }   
};

int main(){

    emp e1;
    e1.setSalary(50000); 
    cout << "Salary: " << e1.getSalary() << endl; 

    return 0;
}