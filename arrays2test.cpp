#include <iostream>
using namespace std;

int main()
{
    int arr[][3] = {
        1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int j = 0; j < sizeof(arr[0]) / sizeof(int); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}