#include<iostream>
using namespace std;

void display()
{
    cout << "Pointer function" << endl;
}

int main()
{
    void (*pFun)(); //declaration of function pointer

    pFun = display; // initialization
    (*pFun)();   // calling of the function

    return 0;
}