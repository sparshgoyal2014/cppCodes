#include<iostream>
using namespace std;

int passArray(int arr[], int size){
    cout << sizeof(arr) << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};

    passArray(arr, 5);
    return 0;
}