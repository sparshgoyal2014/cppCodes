#include<iostream>
using namespace std;

class A{
    public:
    void show(){
        cout << "this is class A.." << endl;
    }
};

class B : public A{};
class C : public B{};

int main(){
    C c;
    c.show();
    return 0;
}