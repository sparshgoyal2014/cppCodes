#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {0,1,2,3,4};
    for(int x:arr)
    {
        x++;
        cout << x << " " ;
    }

    cout << endl;

    for(int y: arr)
    {
        cout << y << " " ;
    }
    cout << endl;

    for(int &z:arr)
    {
        z= z+2;
        cout << z << " " ; 
    }
    cout << endl;

    for(int p: arr)
    {
        cout << p << " ";
    }
    cout << endl;


    return 0;
}