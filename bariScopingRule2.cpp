#include<iostream>
using namespace std;

void fun(){
    int x = 5;
    cout << x << endl;
}

int main(){
    fun();
    cout << fun()::x << endl;   // very very-very Drastic error
}