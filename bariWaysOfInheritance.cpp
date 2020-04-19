#include<iostream>
using namespace std;

class parent{
    private: int a;
    protected: int b;
    public: int c;

    void funParent(){
        a=100;
        b=200;
        c=300;
    }

    void display(){
        cout << a << " " << b << " " << c << endl;
    }
};

class child : public parent{
    public:
    void funChilad(){
        //a=10;
        b=20;
        c=30;
    }
};

class grandChild : public child{
    public:
    void funGrandChild(){
        //a=1;
        b=2;
        c=3;
    }
};

int main(){
    grandChild gc;
   //s gc.funGrandChild();
    gc.display();

    return 0;
}