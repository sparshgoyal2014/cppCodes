#include<iostream>
using namespace std;

int main()
{ // dynamic array allocation.........
    int *p = new int[5];

    cout << p << endl;

    p[0] = 2;
    p[1] = 3;

    for(int i=0;i < 5;i++)
    {
        cout << p[i] << endl;
    }

    int arr[5] = {0,1};

    for(int i=0;i<5;i++)
    {
        cout << arr[i] <<endl;
    }

    int x;

    cout << x << endl;

    delete []p;


    return 0;
}
