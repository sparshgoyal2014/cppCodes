#include<iostream>
using namespace std;

class test{
    int c;
    public:
    int a;
    int b;
};

int main(){
    test t = {1, 2};
    cout << t.a << "   " << t.b  << endl;

    return 0;
}