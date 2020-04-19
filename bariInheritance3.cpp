#include<iostream>
using namespace std;

class base{
    public:
    int x = 5;

    void show(){
        cout << x << endl;
    }

};

class derived : public base{
    public:
    int y = 2;
    void display(){
        cout << x << " " << y <<endl;
    }

};


int main(){
    base b;
    cout << b.x << endl;
    derived d;
    cout << d.x << " " << d.y << endl;

    derived d2;
    d2.x = 6;

    cout << d2.x << "  " << b.x << endl;

    b.show();
    d.show();
    d.display();
    d2.show();
    d2.display();
    
    return 0;
}