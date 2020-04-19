#include<iostream>
using namespace std;

class A{
    public:
    void show(){
        cout << "this is class A" << endl;
    }

};

class B{
    public:

    A a;

    void show(){
        cout << "this is class B" << endl;
    }
};

int main(){
    B b;

    b.a.show();
    return 0;
}