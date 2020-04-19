#include<iostream>

using namespace std;

int main(){
    int x = 2;
    int *ptr;
    ptr = &x;

    cout << sizeof(ptr) << endl;
    return 0;

}