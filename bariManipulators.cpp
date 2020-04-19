#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>

using namespace std;


int main(){
    cout << hex << 163 << endl;
    cout << fixed << 125.731 << endl;
    cout << scientific << 25.68 << endl;

    cout << set(10) << "HELLO" << endl;

    cout << 10 << ws << 20 << endl;

    return 0;



}