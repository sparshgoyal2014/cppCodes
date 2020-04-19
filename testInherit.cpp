#include<iostream>
using namespace std;

class base{
    public:
    int a=10;

    void display(){
        cout << a << endl;
    }
};

class derived :public base{
    public:
    int y= 20;
    a=30;
    void show(){
        cout << a << " " << y << endl;
    }
};

int main(){
    derived d;
    d.show();
    d.display();


    return 0;
}
 