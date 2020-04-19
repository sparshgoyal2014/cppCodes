#include<iostream>
using namespace std;

int main(){

    int *ptr;
    int y = 5;

    {
        int x = 10;
        ptr = &x;
        cout << ptr << endl;
        cout << &x << endl;
    }

    cout << ptr << endl;
    cout << *ptr << endl;


    return 0;

}