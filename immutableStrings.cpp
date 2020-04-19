#include<iostream>
using namespace std;

int main(){

    string const  str1 = "hello";
    cout << str1 << endl;
    cout << &str1 << endl;
   // str1 = "world";
    cout << &str1 << endl;

    return 0;
}