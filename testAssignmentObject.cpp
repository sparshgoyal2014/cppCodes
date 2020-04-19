#include<iostream>
using namespace std;

class test{
    public:
    int a = 5;
    int b = 6;
};

int main(){
    test t1;
    cout << t1.a << "   " << t1.b << endl;

    test t2 = t1;
    cout << t2.a << "   " << t2.b << endl;

    t1.a = 10;
    t1.b = 11;

    cout << t2.a << "   " << t2.b << endl;

    return 0;
}