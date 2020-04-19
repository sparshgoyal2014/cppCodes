#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout << &a << endl;
    cout << &b << endl;
    // char* ptr = "hello";
    // cout << ptr << endl;

    // char arr[] = "world";
    // cout << arr << endl;
    // cout << &arr << "   " << &ptr << endl;
    // cout  << *arr << "   " << *ptr << endl;

    // cout << *(&ptr) << endl;

//    char check[] = {'j', 'o', 'e'};  // shows undefined behaviour as there is no null trminated character and compiler does not know where shout it stop
    char check[] = {'j', 'o', 'e', '\0'};
    cout << check << endl;
    cout << &check << endl;
    cout << *check << endl;
    cout << *(&check) << endl;
    cout << &(*check) << endl;


cout << "888888888888888888888888888888888888" << endl;

    char *ptr = "spartsh";  // ptr stores constant string literal
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << *(&ptr) << endl;
    cout << &(*ptr) << endl;

    ptr[2] = 'm';
    cout << ptr << endl;
   // run-time error

    cout << "=======================" << endl;
    char arr2[] = "goyal";
    cout << arr2 << endl;
    cout << &arr2 << endl;
    cout << *arr2 << endl;
    cout << *(&arr2) << endl;
    cout << &(*arr2) << endl;

    *arr2 = 't';
    cout << arr2 << endl;




    return 0;
}