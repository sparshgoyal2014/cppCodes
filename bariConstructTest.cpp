#include<iostream>
using namespace std;


class rectangle{
    public:

    int length;
    int breadth;

    int display(){
        return length; 
    }

    rectangle(){
        cout << breadth << endl;

    }
};

int main(){
   // rectangle r1,r2,r3,r4,r5,r6,r7,r8,r9;
    //cout << r1.length << "   " << r1.breadth << "   " << r2.length << "    " << r2.breadth << endl;
    //rectangle r1,r2;

    rectangle r2;
    rectangle *r;

    r = &r2;
    cout << r << endl;




    return 0;

}