/*
           0 1 2 3 4 
           
        0  * * * * *
        1    * * *
        2      *


*/


#include<iostream>
using namespace std;

int revPyramidPattern(int n){
    for(int i=0; i<n; i++){
        //space 
        for(int j=0; j<i; j++){
            
            cout<<" ";    
        }
        //star
        for(int j=0; j<(2*n-(2*i+1)); j++){
            cout<<"*";
        }       
        
        //space 
        for(int j=0; j<i; j++){
            
            cout<<" ";    
        }
        cout<<endl;
    }
    return 0;
}

int main(){

    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    revPyramidPattern(n);

    return 0;
}