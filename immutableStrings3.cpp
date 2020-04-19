#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "hello";
    string str2 = "hello";

    str2 = "world";

     str2.push_back('t');

    cout << str1 << "    " << str2 << endl;
    return 0;
}