#include<iostream>
using namespace std;

void fun(int *ptr){
    int q = 10;
    ptr = &q;
}


int main(){
    int r = 20;
    int *p = &r;

    fun(p);
    cout << *p << endl;

    return 0;
}
