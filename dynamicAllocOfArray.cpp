#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    int *p;

    p = arr;

    cout << p[2] << endl;

    int *q;
    q = new int[5];

    q[1] = 5;

    cout << q[1] << endl;
    return 0;
}