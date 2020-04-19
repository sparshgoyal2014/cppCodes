#include<iostream>
using namespace std;


string display(){
    return "Hello World";
}

int main(){

    cout << display() << endl; 
    cout << &display() << endl;
    return 0;
}