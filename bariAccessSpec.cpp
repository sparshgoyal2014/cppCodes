#include<iostream>
using namespace std;

class base{
    private:
    int a;
    protected:
    int b;

    public:
    int c;

    void funBase(){
        a=10;
        b=20;
        c=30;
    }

};

class derived :  base{

};

int main(){
    base x;
  //  x.a = 15;  
  //  x.b = 30;    you can only access public members...
    //x.c = 90;
}