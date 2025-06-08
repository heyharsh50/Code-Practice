#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 5;

    cout << "Location of key: "<< linearSearch(arr, size, key) << endl;

    return 0;
}