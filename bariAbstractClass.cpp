#include<iostream>
using namespace std;

class base{
    public:
    void fun1(){
        cout << " base fun1" << endl;
    }

    virtual void fun2() = 0;
    /*
    {
        cout << "base fun2" << endl;
    }
   */
};

class derived : public base{
    public:
    void fun2(){
        cout << "derived fun2" << endl;
    }
};

int main(){
    base *ptr = new derived();

    ptr -> fun2();

    return 0;
    
}