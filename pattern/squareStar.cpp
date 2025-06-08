/* 
        * * * *
        * * * *
        * * * * 
        * * * * 

*/

#include<iostream>
using namespace std;

int squareStar(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){

    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    squareStar(n);

    return 0;
}