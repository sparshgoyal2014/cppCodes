#include<iostream>
using namespace std;

int main()
{
    int arr[4];
    for(int i=0;i<10;i++)
    {
        arr[i]=i;
        cout << arr[i];
    }
    cout << endl;

    cout << arr[5];

    return 0;

}