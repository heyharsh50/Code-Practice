#include<iostream>
using namespace std;

void primeNum(int n){

    bool isPrime = true;
    
    if(n<=1){
        
        isPrime = false;
        
    }
    else{
        
        for(int i=2; i<=n/2; i++){
            
            if(n%i == 0){
                
                isPrime = false;
                
            }
        }
    }
    
    if(isPrime){
        
        cout<< n <<" is prime number."<<endl;
        
    }
    else{
        
        cout<< n <<" is not prime number."<<endl;
        
    }
    
}

int main(){
    
    int n;

    cout<<"Enter the number: "<<endl;
    cin>>n;

    primeNum(n);

    return 0;
}