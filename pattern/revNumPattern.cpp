/* 
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1

*/

#include<iostream>
using namespace std;

int revNumPattern(int n){
    for(int i=1; i<n+1; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
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