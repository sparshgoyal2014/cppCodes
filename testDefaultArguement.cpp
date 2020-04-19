#include<iostream>
using namespace std;

void fun(int a, int b=0, int c){
    cout << a << " " << b << " " << c << endl;
    return;
}

int main(){
    fun(1,2,3);
    return 0;
}
