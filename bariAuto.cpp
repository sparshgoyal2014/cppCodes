#include<iostream>
using namespace std;

float fn(){
    return 2.34f;
}


int main(){
    auto x = 2*5.7 + 'a';
    //OR
    //double x = 2*5.7 + 'a'  // it will automatically converted to highest precedence data type i.e
    //doble....askii value of a is taken and types conversion is performed automatically

    // or it is also called  Coercion (i.e implicitly conversion of data types )
    cout << x << endl;

    double y = 2*5.7 + 'a';
    cout << y << endl;

    double d = 12.3;
    int i = 9;
    auto a = 2*d + i;
    cout << a << endl;

    auto f = fn();
    cout << f << endl;

    return 0;
}