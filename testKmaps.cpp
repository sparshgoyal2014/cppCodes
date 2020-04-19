#include<iostream>
using namespace std;

int value;

void changeValue(int x)
{
    switch(x)
    {
        case 0:

        value = 0;
        break;

    }
}

int main()
{
int n;

cout << "enter n:" << endl;
cin >> n;
    changeValue(n);

    cout << value;
    

    return 0;



}