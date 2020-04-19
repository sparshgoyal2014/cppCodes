#include<iostream>
using namespace std;

void display(int a){
    cout << a << endl;
}

void display2(char a){
    cout << a << endl;
}


int main(){
    display('a');
    display2(65);
    return 0;
}