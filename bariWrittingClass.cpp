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
    rectangles r1,r2;  // rectangles = user defined data types
    // r1,r2 = variables of data type rectangle
    // 

    r1.length=10;
    r1.breadth=15;

    cout << r1.length << "  " << r1.breadth << endl;
    cout << r1.area() << " " << r1.perimeter() << endl;

    cout << r2.length << endl;

   // cout << r1.area << endl;
   cout << area << endl;

    return 0;

}