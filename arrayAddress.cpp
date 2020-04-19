#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};

    cout << arr << endl;   // address

    // int *p= &arr;    // not possible
    int *pInt = &arr[0];  // yes its possible

    // cout << p << endl;

    cout << pInt << endl;

    for (int i = 0; i < 5; i++)
    {
        pInt = &arr[i];
        cout << pInt << endl;
    }

    return 0;
}