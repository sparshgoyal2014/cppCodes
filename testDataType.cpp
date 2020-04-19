#include<iostream>
using namespace std;

int main(){
    int a = 2.5f;  // float converted to Int
    int b = 2.6;   // double converted to Int
    int c = 5/2;  // 5/2 is an int so its int to int
    float d = 3/2;  
    int e = 3.0f;
    float f = 3.0f/2.0f;
    //float g = (3.0f(int)/(2.0f(int));
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;

    float x1 = 5;
    float y1 = 2;

    float z1 = x1/y1;

    cout << z1 << endl;

    float x = 5;
    float y = 2;

    float z = x/y;

    cout << z << endl;

    return 0;
}