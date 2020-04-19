#include<iostream>
using namespace std;

class testA{
    public:
    void display(){
        cout << "this is display function of class A" << endl;
    }
};

class testB : public testA{
    public:
    testB(testA obj){
        obj.display();
        cout << "this inherits the display function of testA class" << endl;
    }
};

int main(){
    testB obj(this);
}
