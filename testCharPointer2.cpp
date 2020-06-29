#include<iostream>
#include<typeinfo>
using namespace std;

int main(){

    char* charArray = "abc";
    char charArray2[] = {'a', 'b', 'c'};

    cout << &charArray2 << endl;
    cout << &charArray2[0] << endl;
    cout << (void*)&charArray2[0] << endl;
    cout << "********************************" << endl;
    cout << charArray << endl;
    cout << &charArray << endl;
    cout << &charArray[0] << endl;
    cout << *charArray << endl;
    cout << &charArray << endl;
    cout << *&charArray << endl;
    cout << &*charArray << endl;

    cout << "===============================" << endl;

    string str = {'s', 'b', 'd'};
    cout << str << endl;

    int arr[5] = {1,2,3,4,5};
    // arr = arr+1;  // it is not assignable , // a kind of constant 

    cout << arr[0] << endl;

    char arr2[5] = {"abcd"};
    cout << arr2 << endl;


    char* ptrToCharaacter = charArray;

    // cout << typeid(1).name() << endl; 
    // cout << typeid(1.23).name() << endl;

    // cout << typeid("abc").name() << endl; 

    return 0;
}