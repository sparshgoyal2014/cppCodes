#include<iostream>
using namespace std;

int main(){

    
    int *ptr = new int(5);
    int** ptrToPtr = new int*(ptr);
    int * ptr3 = new int();  // 0
    int *ptr3 = new int;   // garbage
    cout << *ptr3 << endl;
    cout << ptrToPtr << endl;


    return 0;
}