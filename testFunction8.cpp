#include<iostream>
using namespace std;

void display(){
    cout << num << endl;
}

int num = 3;

void test(){
    display();
}


int main(){
    // test();  // error will be there, whether we call test() function or not
    return 0;
}