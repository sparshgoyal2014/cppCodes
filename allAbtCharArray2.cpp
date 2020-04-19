#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char* ch = {"hello"}; // ch[] = "hello"   // char pointers are also c-Style Strings i.e. char arrays strings

    cout << ch << endl;
    cout << *(ch+1) << endl;  // ch[1]
    cout << ch+2 << endl;
    cout << strlen(ch) << endl;

    int y = 2;
    int *x = {&y};
    cout << *x << endl;

    return 0;

}