//Getter and Setter and access modifiers
#include <iostream>
using namespace std;

class Cars{

    private:
    int brakes;

    public:
    void setBrakes(int b){
        brakes = b;
    }
    int getBrakes(){
        return brakes;
    }
};
int main(){
    Cars c1;
    c1.setBrakes(4);
    cout << "Brakes: " << c1.getBrakes() << endl;
    return 0;
}