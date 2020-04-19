#include<iostream>
using namespace std;

void display(){
    cout << "hello.. " ;
}

void show(){
    display();
    cout << "world..." << endl;
}

int main(){
    show();

    return 0;
    
}