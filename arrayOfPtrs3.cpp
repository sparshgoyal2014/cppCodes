#include<iostream>
using namespace std;

int main(){
    int(*ptr)[5];
    int arr[5]= {1,2,3,4,5};

    ptr = &arr;

    cout << ptr << " " << arr << " " << &arr[0] << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << *ptr[0] << endl;
    cout << *ptr[2] << endl;
    cout << (*ptr)[2] << endl;
    cout << *(*ptr) << endl;



    //cout << *(*ptr[1]) << endl;
    cout << (*ptr)[0] << endl;
    cout << *arr << endl;
    // arr[2] = *(arr+2);
    //ptr = arr;
    //*(ptr+2); // to print 3rd element of an array ......
    //ptr[2]
    cout << ptr[0] << " " << ptr[2] << endl;

    return 0;

}