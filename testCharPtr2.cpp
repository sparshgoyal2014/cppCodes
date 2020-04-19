#include<iostream>
using namespace std;

int main(){
    char x = 'a';

    string s = "spartsh";
    char* ptr = &x;

    cout << ptr << endl;

    ptr ;


    char arr[] = "goyal";
    char* ptr2 = arr;
    cout << ptr2 << endl;

    ptr2[2] = 't';

    cout << ptr2 << endl;




    return 0;
}