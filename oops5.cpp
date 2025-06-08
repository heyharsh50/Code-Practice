#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initCounter(void){
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};

void shop::setPrice(){
    cout << "Enter Id of your item: " << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice(){
    for(int i = 0; i < counter; i++){
        cout << "Item Id: " << itemId[i] << endl;
        cout << "Item Price: " << itemPrice[i] << endl;
    }
}

int main(){
    shop s1;
    s1.initCounter();
    s1.setPrice();
    s1.displayPrice();
    return 0;
}