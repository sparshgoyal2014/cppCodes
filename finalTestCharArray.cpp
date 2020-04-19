#include<iostream>
using namespace std;

int main(){
    char arr[] = "Hello";
    arr[1] = 't';

    cout << arr << endl;

    const char *ptr = "HelloWorld";
    ptr[2] = 'r';

    cout << ptr << endl;
    return 0;
}