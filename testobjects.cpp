#include<iostream>
using namespace std;

class test{

    static int x = 4;
    public:
    static int a;
    int b = 6;
    // int *ptr = &a; 
};

int main(){
    test t;
    cout << t.a << "  " << t.b << endl;
    cout << &t << "     " << &(t.a) << endl;
    cout << test:: a << endl;
    // cout << test:: x << endl;
    // cout << t.x << endl;


    return 0;
}