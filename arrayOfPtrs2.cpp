#include <iostream>
using namespace std;

int main()
{
    int(*ptr)[5];
    int arr[5] = {1, 2, 3, 4, 5};

    ptr = &arr;

    cout << ptr << " " << arr << " " << &arr[0] << endl;
    cout << *ptr[0] << endl;
    cout << *ptr[1] << endl;
    cout << *ptr[2] << endl;
    cout << *ptr[3] << endl;
    cout << *ptr << endl;
    cout << *(*ptr) << endl;  // value at address ptr
    //cout << *(*ptr[1]) << endl;// while this will give an error
    cout << (*ptr)[0] << endl;

    return 0;
}