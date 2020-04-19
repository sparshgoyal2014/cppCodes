#include<iostream>
using namespace std;

class rectangles
{
    public:
    int length;
    int breadth;


   int area()
   {
       return length*breadth;
   }

   int perimeter()
   {
       return 2*(length+breadth);
   }
   
};


int main()
{
    rectangles r1;
    rectangles *p;

    p= &r1;

    p->length = 10;
    p->breadth = 20;

    cout << p->length << " " << p->breadth << " " << p->area() << endl;

    cout << p << endl;

    
   // cout << r1.area << endl;
  // cout << area << endl;

    return 0;

}