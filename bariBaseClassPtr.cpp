#include<iostream>
using namespace std;

class base{
    public:
    void fun1(){
        cout <<  " base class  " << endl;
    }
};

class derived : public base{
    public:

    derived(){
        cout << " this is derived class constructor.." << endl;
    }

    derived(int a , int b){
        cout << "this is arguemental const. with args..:" << a << "  " << b << endl;
    }
    void fun2(){
        cout << " derived class " << endl;
    }
};


int main(){
    base *ptr;

    ptr = new derived();
    // or we can use
    //ptr = new derived;


    ptr -> fun1();

    base *ptr3;

    ptr3 = new derived(1,2);

   /* derived *ptr2;
    ptr2 = new base(); */   // not possible this way...



    return 0;
}
