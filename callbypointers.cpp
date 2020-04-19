#include<iostream>

using namespace std;

void function(int* , int*);

int main()
{

    int a = 75;
    int b = 65;

    cout << " values of a and b in the main is :  " << a << " " << b << endl;

    function(&a , &b);

    cout<< " changed values of a and b in the main function are : " << a << " " << b << endl;


    return 0;



}


void function(int* x , int* y)
{
    *x = 10;
    *y = 20;

    cout<< " changed values are : " << *x << " " << *y << endl;

    }