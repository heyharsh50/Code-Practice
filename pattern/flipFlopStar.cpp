/*
                    *
                  * * *
                * * * * *
              * * * * * * *
              * * * * * * *
                * * * * * 
                  * * *
                    *     


*/

#include<iostream>
using namespace std;


int pyramidStar(int n){
    for(int i=0; i<n; i++){

        //space
        for(int j=0; j<n-i-1; j++){

            cout<<" ";

        }

        //star
        for(int j=0; j<2*i+1; j++){

            cout<<"*";

        }

        //space
        for(int j=0; j<n-i-1; j++){

            cout<<" ";

        }
        cout<<endl;
    }
    return 0;
}


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

    pyramidStar(n);
    revPyramidPattern(n);

    return 0;
}