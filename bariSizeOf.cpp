#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    char x;

    cout << CHAR_MIN << " " << CHAR_MAX << endl;

    x = CHAR_MAX;

    cout << INT_MAX << " " << INT_MIN << endl;
    cout << sizeof(int) << endl;

    cout << x << endl;
    return 0;
}