#include<iostream>
using namespace std;

class base{
    protected:
    int x = 5;
    public:
    int y = 6;
    
};

class derived : public base{
    public:
    /*void display(){
        base b;
        cout << b.x << endl;
    }*/
    void show(base& b ){
        cout << b.y << endl;
    }

};

int main(){
    derived d;
    base b;
    //d.display();
    d.show(b);

    return 0;

}