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
    rectangles *p; 
    /* OBJECT IN STACK .................rectangles r;
        OBJECT IN HEAP ......................rectangle *p = new rectangles;
        */
    p = new rectangles;
     //OR p = new rectangles()

     p->length = 15;
     p->breadth = 10;

     cout << p-> length << ' ' << p-> breadth << " " << p->area() << endl;

     return 0;


}
