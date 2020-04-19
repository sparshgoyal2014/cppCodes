#include<iostream>
using namespace std;

class A{
    public:

   

    A(){
        cout << "this is class A constructor.." << endl;
    }

    A(int a){
        cout << "this is class A constructor with value: "<< a << endl;
    }
    void show(){
        cout << "This is Class A" << endl;
    }
};

class B{
    public:
    void show(){
        cout <<"This is class B" << endl;
    }
};



int main(){
    A a();
    A a1();
    A a2(0);
    a2.show();

    
    

    //a1.show();
    B b;

    //a.show();
    b.show();

    cout << B::show << endl;
    return 0;
}


