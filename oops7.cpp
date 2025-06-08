//Array of objects
#include<iostream>
using namespace std;
class emp{
    int id;
    int salary;
    public:
        void setData();
        void getData();
};

void emp::setData(){
    cout << "Enter id and salary: "<<endl;
    cin >> id >> salary;
}
void emp::getData(){
    cout << "Id: " << id << ", Salary: " << salary << endl;
}

int main()
{
    emp e[10]; //Array of objects
    cout << "Employee details: " << endl;
    for(int i=0; i<10; i++){
        e[i].setData();
        e[i].getData();
    }

    return 0;
}