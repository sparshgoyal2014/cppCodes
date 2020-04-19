#include<iostream>
using namespace std;

class rectangles {
    private:
    int length=10;
    int breadth=5;

    public:
    int area(){
        return length*breadth;    // inline automatically
    }

    int perimeter();              // not inline 
};

int rectangles:: perimeter()
{
    return 2*(length + breadth);
}

int main()
{
    rectangles r1;
    cout << r1.area() << "  " << r1.perimeter() <<endl;  // area function is written inside the main code of the memory while perimeter function is written separately outside the main code of the memory 0

    return 0;
}