#include<iostream>
using namespace std;

class test{
    public:
    test(){}



    int a, b;
};

class test2{
    public:
    
    int x,y;
};


int main(){
    cout << test().a << "   "  << test().b << endl;  // user provided constructor

    cout << test().a  << endl;
    cout << test().b << endl;


    cout << test2().x << "   "  << test2().y << endl;  // No, user provided constructor

    cout << test2().x  << endl;
    cout << test2().y << endl;


    return 0;
}


