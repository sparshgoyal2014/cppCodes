#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout << "Default of Base " << endl;
    }

    base(int x){
        cout << "param. Of base " << x  << endl;
    }

};

class derived : public base{
    public:
    derived(){
      cout << "default Of Derived" << endl;
    }

    derived(int a){
        cout << "param. Of derived" << a << endl;
    }

    derived(int x , int a):base(x) { // calling is different and the executin is different....
    // derived(10,20)is called first but base (20) is executed first......
        cout << "param. of Derived" << a << endl;
    }
};

int main(){
    derived d1;
    cout << "===========" << endl;
    derived d2(10);
    cout << "===========" << endl;
    derived d3(10,20);

    return 0;
}

