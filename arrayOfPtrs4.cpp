#include<iostream>
using namespace std;

int main(){
    int (*ptr)[10];  // pointer to an array of size 10
    int a[10]={99,16,2,3,4,5,6,7,8,9};
    ptr=&a;
    cout << (*ptr)[1] << endl;

    return 0;
}