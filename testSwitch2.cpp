#include <iostream>
using namespace std;

int main()
{
    char x = 'c';
    switch (x) {

    default:{
        cout << "this is default case" << endl;
         
    }

    case 'b':{
        cout << "this is case 1" << endl;
        break;
    }

    case 'a':{
        cout << "this is case 2 " << endl;
        break;
    }
    }

    return 0;
}