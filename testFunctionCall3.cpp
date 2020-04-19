#include<iostream>
using namespace std;

void display(){
    cout << "this is display function" << endl;
    // void test(){
    //     cout << "this is test function defined inside display function" << endl;
    // }
    // function definition is not allowed here

    test();
}

int main(){
    display();
    return 0;
}

