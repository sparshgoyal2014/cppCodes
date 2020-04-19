#include <iostream>
using namespace std;

//class something;  // delaration
//class something{}; // implementation
//class something{}; // re implementation...

class MyException
{
};

int main()
{

    MyException obj;

    int x = 10, y = 0, z;

    try
    {
        if (y == 0)
            throw MyException() ;    // myException() is an object declaration
           // throw obj; // this is also possible

        z = x / y;
        cout << z << endl;
    }

    catch (MyException e)
    {

        cout << "division by zero" << endl;
    }

    cout << "bye" << endl;

    return 0;
}