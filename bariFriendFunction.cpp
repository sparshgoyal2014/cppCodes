#include<iostream>
using namespace std;

class test{
    private:
    int a;

    protected:
    int b;

    public:
    int c;


    void getVars(){
        cout  << a << " " << b << " " << c  << endl;
    }

    friend void fun();
};

void fun(){
    test t;
    //t.a = 10;
    // t.b = 15;  we can not because it is not member function of that class.....
    t.a = 10;
    t.b = 15;
    t.c = 56;

}

int main(){

    fun();
    test t;
    t.getVars();

    return 0;

}