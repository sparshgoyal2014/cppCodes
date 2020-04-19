#include<iostream>
using namespace std;

class test{
    
    public:

    int a = 10;
    int b = 5;
    int c = 15;
        // int *ptr;
        // int *ptr2;
    test(){
        // ptr = new int(5);
        // ptr2 = new int(10);

        // cout  << "  " << *ptr2 << endl;
    }
};


int main(){
    test t;

    test* ptr = new test();

    cout << sizeof(t) << endl;
    cout << sizeof(*ptr);
    return 0;

}