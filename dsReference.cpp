#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int *ptr;
    ptr = &a;
    int &r = a;  // reference variable must be initialized on the same line

    return 0;
}