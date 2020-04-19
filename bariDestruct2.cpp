#include<iostream>
using namespace std;

class demo{
    int *ptr;

    public:
    demo(){
        ptr = new int[10];
        cout << "constructor of dempo.." << endl;

    }

    ~demo(){
        delete []ptr;
        cout << "destructor of demo .." << endl;
    }

};

void fun(){
    demo *p = new demo();

    delete p;

}

int main(){
    fun();
    return 0;
}