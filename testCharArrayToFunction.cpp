#include<iostream>
using namespace std;

void display(int arr[5]){
    cout << arr << endl;
    cout << sizeof(arr) << endl;  
}

int main(){

    int arr[5] = {1,2,3,4,5};
    display(arr);
    
    return 0;
}