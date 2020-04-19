#include<iostream>
using namespace std;

void testfun(int x){
    cout << &x << endl;
    if(x != 0){
        testfun(x-1);
    }

    return;
}


int main(){
    int x = 5;
    testfun(x);

    return 0;
}