#include<iostream>
using namespace std;

int main(){
    char *ptr = "hello";
    cout << ptr << endl;
    cout << &ptr << endl;
    // cout << *(void*)&ptr << endl; // can't dereference void ptr

    // int x = 5;
    // int* ptr2 = &x;
    // // cout << *(void*)ptr2 << endl;

    // void* ptr3 = &x;
    // // cout << *ptr3 << endl;

    cout << &(*ptr) << endl;
    cout << *(&ptr) << endl;

    return 0;
}