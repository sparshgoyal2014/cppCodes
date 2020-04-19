#include<iostream>
using namespace std;

void test(int * ptr){
    *ptr = 5;
    cout << *ptr << endl;
}

int main(){
    char* ptr = "abc";
    cout << ptr << endl;

    const int a = 10;
    test(&a);
    return 0;
}
