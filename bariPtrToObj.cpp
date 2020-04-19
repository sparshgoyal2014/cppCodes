#include <iostream>
using namespace std;

class rectangle
{
  public:
    int length;
    int breadth;

    int area(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    rectangle r;
    rectangle *p;
    rectangle *q; //pointers are always created in the stack......
                  //pointers are of size.... --2 bytes (or depends on the compilr)

    q = new rectangle;
    // Stack based objects are implicitly managed by C++ compiler. 
    //They are destroyed when they go out of scope and dynamically allocated objects 
    //must be manually released, using delete operator otherwise memory leak occurs.

    p = &r;
    p->length = 10;
    p->breadth = 5;

    cout << p->area(r.length, r.breadth) << endl;

    cout << p->area(p->length, p->breadth) << endl;

    return 0;
}