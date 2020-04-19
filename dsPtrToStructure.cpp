// every pointer have 2 bytes size whatever


#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r = {10,5};
    struct Rectangle *p = &r;

    (*p).length = 20;
    
    cout << r.length << endl;
    p->length = 30;

    cout << r.length << endl;


    struct Rectangle *ptr = new Rectangle;
    cout << ptr-> breadth << endl;  // garbage value
    return 0;
}