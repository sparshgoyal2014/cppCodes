#include<iostream>
using namespace std;

int* testFunction(int x){
    cout << &x << endl;
    return &x;
}

int main(){
    int x = 2;
    testFunction(x);

    int arr[5] = {1,2,3,4,5};
    cout << arr << endl;
    cout << arr+5 << endl;
    cout << arr-1  << endl;

    cout << "********************************" << endl;
    cout << testFunction(x) - arr << endl;
    cout << arr - testFunction(x)  << endl;
    cout << "********************************" << endl;

    cout << arr + 16005566 << endl;


    testFunction(x);

    return 0; 
}