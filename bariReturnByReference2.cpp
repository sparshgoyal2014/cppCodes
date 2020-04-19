#include<iostream>
using namespace std;

int* fun(){

    int length = 5;
    int breadth = 2;

    

    int *p =& length;
    cout << p << endl;
    //return p;
    cout << &breadth << endl;

    return &breadth;
}

int main(){

    int *q;

    cout << fun() << endl;
    cout << q << endl;

    return 0;

}
