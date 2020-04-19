#include<iostream>
using namespace std;

class base{
    public:
    virtual void fun(){
        cout << "fun of base" << endl;
    }
};

class derived : public base{
    public:
    void fun(){
        cout << " fun of derived " << endl;
    }
};

int main(){
    base *ptr = new derived();

    ptr -> fun();

    base b;
    b.fun();

    derived d;
    d.fun();

    return 0;
}