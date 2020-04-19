#include<iostream>

using namespace std;

void function(int& , int&);


int main()
{

    int a=72;
    int b=63;

    cout << "values of variables a and b  in the main function is : " << a << " " << b << endl;

    function(a,b);

    cout << "changed values of a and b in the main function are : " << a << " " << b << endl;

    return 0;


}

void function(int& x, int& y)
{
    x=10;
    y=20;
    cout<< "changed values are : " << x << " " << y << endl;

}


/*
void function(int,int);

/*int main()
{
 int a=75,b=36;
 cout << "original values of variables a and b  are : " << a << " " << b << endl;

 function(a,b);

 cout << "changed values of a and b in the main function are : " << a << " " << b << endl;


 return 0;


}


void function(int x, int y)
{
    x=10;
    y=20;

    cout<< "changed values are : " << x << " " << y << endl;


 } */


