#include<iostream>
using namespace std;

class rectangles{

    private:
    int length;
    int breadth;

    public:
    rectangles(int length,int breadth){

        this->length = length;   // 'this' is an object it means this.length = length

        this->breadth = breadth;  // this.breadth = breadth .......accessing the private data using 'this' objects
    }

    int area(){
        return length*breadth;
    }
};

int main()
{
    rectangles r1(10,5);
    cout << r1.area() << endl;
    return 0;
}
