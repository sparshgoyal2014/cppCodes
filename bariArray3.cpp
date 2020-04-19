#include<iostream>
using namespace std;


int main()
{
    int arr[3];
    cout << "enter values ...." << endl;

    for(int i=0;i<10;i++)
    {
        cin>> arr[i] ;
    }

    for(int i=0;i<10;i++)
    {
        cout << arr[i] << " " ;
    }


    return 0;
}