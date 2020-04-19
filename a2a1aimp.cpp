#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b){
        if (a > c)
            cout << a << "is greatest" << endl;   // no requirement of else or else-if
    }else if (b > a){
        if (b > c)
            cout << b << "is greatest" << endl;
    }else if (c > a){
        if (c > b)
            cout << c << "is greatest" << endl;
    }else if (a < b){
        if (a < c)
            cout << a << "is smallest" << endl;
    }else if (b < a){
        if (b < c)
            cout << b << "is smallest" << endl;
    }else if (c < a){
        if (c < b)
            cout << c << "is smallest" << endl;
    }

    return 0;
}