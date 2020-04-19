#include<iostream>
using namespace std;


int main(){
    int x = 10;
    float y = 90.5;


    decltype(y) z = 12.3;    // data type of z is same as data type of y..
    cout << z << endl;
    return 0;
}