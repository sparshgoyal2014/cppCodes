#include<iostream>
using namespace std;

void funA(int n){
    if(n>0){
        cout << n << " " ;
        funB(n-1);
    }
}

void funB(int n){  // as hoisting does not exist in c++, so you must declare a function on the top(or we say it a "top level declaration" ), before using it
// see this referemnce...https://stackoverflow.com/questions/22548148/hoisting-reordering-in-c-c-and-java-must-variable-declarations-always-be-on
    if(n>1){
        cout << n << " " ;
        funA(n/2);
    }
}

int main(){
    funA(20);

    return 0;
}