#include <iostream>

using namespace std;
int main()
{

    int iArray[] = {1, 2, 3, 4, 12, 6};

    int *pArray = iArray;

    for (int i = 0; i < sizeof(iArray) / sizeof(int); i++)
    {

        cout << pArray[i] << endl;
    }

    for (int i = 0; i < sizeof(iArray) / sizeof(int); i++)
    {
        cout << *pArray << endl;
        cout << *iArray << endl;
    }

    cout << "==============================================" << endl;

    for (int i = 0; i < sizeof(iArray) / sizeof(int); i++)
    {
        cout << *pArray << endl;

        pArray = pArray + 1;
    }

    return 0;
}