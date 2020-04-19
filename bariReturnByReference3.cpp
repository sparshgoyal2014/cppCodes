#include<iostream>
using namespace std;

int* fun(){
    int* ptr;

    int x=5;

    ptr = new int(6);
    //return &x;
    return ptr;
}


int main(){
    //cout << fun() << endl;
    int * ptr = fun();
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}