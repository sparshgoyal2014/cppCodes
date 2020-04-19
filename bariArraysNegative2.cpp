#include<iostream>
using namespace std;

int main()
{
    int arr[3];
    for(int i=0;i<5;i++)
    {
        arr[i]=i;
        cout << arr[i] << ' ' ; 
    }
    cout << arr[4] << endl;

    return 0;
}