#include<iostream>
using namespace std;


class rectangles{
    public:
    int length = 5;
    int breadth = 2;

    int area(){
        return length*breadth;
    }

};

int main(){
    rectangles r;
    rectangles *p;
    p = &r;

    cout << r.area() << endl;
    cout << p->area() << endl;

    return 0;

}
