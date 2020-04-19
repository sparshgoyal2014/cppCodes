#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    int square[3][3] = {1,2,3,4,5,6,7,8,9};

    cout << "your Outcoming Square Matrix Is  : " << endl;

    for(int i = 0; i < 3 ; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
            cout << setw(5)<< square[i][j]<< setw(5);
        }
        cout << endl;
    }


    return 0;

}