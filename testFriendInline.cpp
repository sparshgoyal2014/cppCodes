#include<iostream>
using namespace std;

class test{
    int x = 5;

    public:
    friend void display();

};

inline void display(){
    cout << test().x << endl;
}

int main(){
    test t;
    display();

    return 0;
}