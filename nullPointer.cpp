#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int *ptr1;
    ptr1 = nullptr;
    int *ptr2;
    ptr2 = NULL;

    int *ptr3;
    ptr3 = 0;

    cout << ptr1 << " " << ptr2 << ' ' << ptr3 << endl;

    void * p = (void*)nullptr;

   cout <<  *(int*(p)) << endl;

    return 0;
}