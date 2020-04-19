#include<iostream>
using namespace std;

int main(){
    int a = 10;
    void *ptr = (int*)&a;

    cout << *ptr << endl;  // error can't dicrectly de-reference the void pointer, wee must have to cast it before dereferencing it. 
    
    return 0;
}