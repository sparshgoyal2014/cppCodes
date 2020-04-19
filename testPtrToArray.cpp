#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5];

    ptr = &arr;

    cout << ptr + 1 << endl;
    cout << ((int *)ptr) + 1 << endl;
    return 0;
}