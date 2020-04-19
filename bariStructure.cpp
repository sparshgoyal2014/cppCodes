#include<iostream>
using namespace std;


struct demo{
    int x;   // in structure things are by default public but in class this is not the case
    int y;

    void display(){
        cout << x << "  " << y << endl;
    }
};


int main()
{
    demo d;
    d.x=10;
    d.y=52;

    d.display();

    return 0;
}