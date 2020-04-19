#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int &y = x;

    if(x==y)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;   
    }

    cout << &x << " " << &y << endl;

    return 0;
    
}