#include<iostream>
using namespace std;


int main()
{
    int x = 2;
    int *p= &x;


    cout << p << endl; 

    p = nullptr;

    cout << p << endl;

    return 0;
}