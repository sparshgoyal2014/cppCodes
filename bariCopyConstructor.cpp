#include <iostream>
using namespace std;

class rectangles
{
  private:
    int length;
    int breadth;

  public:
    rectangles()
    {
        length = 0;
        breadth = 0;
    }

    rectangles(int l, int b)
    {
        setLength(l);
        setBreadth(b);
        getLength();
        getBreadth();
    }

    rectangles(rectangles &rec)
    {
        breadth = rec.breadth;
        length = 4;
        breadth = 6;
    }
    void setLength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }

        else
            l = 0;
    }

    void setBreadth(int b)
    {
        if (b >= 0)
        {
            breadth = b;
        }

        else
            breadth = 0;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    rectangles r1(10, 5);
    rectangles r2(r1);

    cout << r2.area() << endl;
    cout << r1.area() << endl;

    return 0;
}