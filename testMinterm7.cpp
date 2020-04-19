#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    for(int i=3;i>=0;i--)
    {
        for(int k=1;k<=i;k++)
        {
            cout << setw(5) << i << setw(5) << i-k << endl;
        }
    }


    return 0;
}