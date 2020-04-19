#include<iostream>
using namespace std;

void test(int a){
    a = 5;
    cout << a << endl;
}

int main(){
    test(3);
    return 0;
}
