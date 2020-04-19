#include<iostream>
using namespace std;

void display(int x ,int y){
    int *ptr;
    x=0;
    ptr = &x;
    y = *ptr;
    *ptr = 2;
    cout << x << " " << y << endl;
}

int main(){
    display(4,5);
    return 0;
}