#include<iostream>
using namespace std;

int main()
{

    // if x << i.....the x becomes x*2(^i)  and if x >> i.........then x becomes x/2^i
    char x = -2,y;

    y = x<<1;

    cout << (int)y << endl;
        cout << int(y) << endl;

    return 0;

}