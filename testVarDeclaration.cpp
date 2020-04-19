#include<iostream>
using namespace std;

int x;

void dispplay(){
    cout << x << endl;
}

int main(){
    
    cout << x << endl;
    dispplay();
    x = 2;
    
    return 0;
}