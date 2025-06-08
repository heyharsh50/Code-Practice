
#include<iostream>
using namespace std;

int leftTriangleStar(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
    return 0;
}


int leftRevPattern(int n){
    for(int i=1; i<n+1; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){

    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    leftTriangleStar(n);
    leftRevPattern(n);


    return 0;
}