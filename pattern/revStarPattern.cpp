 /* 
        * * * * * * 
        * * * * *
        * * * * 
        * * *
        * *
        *

*/

#include<iostream>
using namespace std;

int revNumPattern(int n){
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

    revNumPattern(n);

    return 0;
}