#include <iostream>
using namespace std;
int main()
{
    char arr[50] = {'H', 'E', 'L', 'L', 'O'};
    cout << arr << endl; // null character '/0' will be printed 45 times......

    for (int i = 0; i < 50; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "=====@#$%%^&********^%&^%$#$==============" << endl;

    char arr2[5] = "h";

    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }
    return 0;
}