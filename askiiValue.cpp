#include<iostream>

using namespace std;

int main()
{
    char x = 'a';
    cout << "value of char x is : " <<  x << endl;


    char y = 6;
    cout << "value of char y is : " << y << endl;

    char z = 'b';

    int i = z;

    cout << "Askii value of char z is : " << i << endl;

    cout << int(z) << endl;

    int i2 = static_cast<int>(z);

    cout << i2 << endl;

    return 0;

}