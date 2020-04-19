#include<iostream>
using namespace std;

int main(){
    int arr[5]= {1,2,3,4,5};
    int *ptr;
    ptr = arr;
    cout << arr << " " << ptr << endl;
    cout << *arr << " " << *ptr << endl;
    cout << arr[2]  << " " << ptr[2] << endl;
    cout << *(arr+2) << ' '<< " " << *(ptr + 2) << endl;
    return 0;
}