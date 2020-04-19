#include<iostream>
using namespace std;

int test(){
    cout << "this is test function " << endl;
    return 2;
    return 3;
}

int main(){
    cout << test() << endl;
    return 0; 
}