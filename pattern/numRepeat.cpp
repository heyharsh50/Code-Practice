/* 
        1
        2 2 
        3 3 3 
        4 4 4 4

*/

#include<iostream>
using namespace std;

int numPattern(int n){
    for(int i=1; i<n+1; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){

    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    numPattern(n);

    return 0;
}