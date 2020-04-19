#include <iostream>
using namespace std;
int main()
{
    char arr[50] = {'H', 'E', 'L', 'L', 'O'};  // rest will automatically be '\0' (null) value
    int arr2[50] = {1, 2, 3, 4, 5};
    cout << arr[2] << endl;
    cout << arr[49] << endl;
    cout << arr2[49];
    return 0;
}