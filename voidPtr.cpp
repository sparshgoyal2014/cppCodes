#include<iostream>
using namespace std;

int main(){
    void *ptr;
    int x = 5;

    ptr = &x;

    cout << &x << endl;
    cout << ptr << endl;

    cout << (int*)ptr << endl;
    cout << *((int*)ptr) << endl;

    return 0;

}

// it can not be de-referenced (cout << *ptr << endl;).....to de-reference it you have to type cast it
// 