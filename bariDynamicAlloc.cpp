#include<iostream>
using namespace std;

int main()
{
    int *p;
    p = new int(2);

    delete p;
    cout << p << endl;
    p = nullptr;

    cout << p << endl;

    return 0;
}