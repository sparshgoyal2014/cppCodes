#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;

    public:

    rectangle(int l = 0 , int b = 0);
    int getLength();
    int getBreadth();
    void setLength(int l);
    void setBreadth(int b);

    int area();
    int perimeter();
};

class cuboid : public rectangle{
    private:

    int height;

    public:
    cuboid(int l=0, int b=0, int h=0){
        height = h;
        setLength(l); // as base class length and breadth are in private 
        setBreadth(b); // we can not do this ---->  length = l , breadth = b;
    }
        int getHeight();
        void setHeight(int h);
        int volume(){
            return getLength()*getBreadth()*height;
        }
    
};

int main(){
    cuboid c(10,5,3);
    cout << c.getLength();
    cout << c.volume() << endl;
    cout << c.area() << endl;
    //cout << c << endl;   // we have to overload insertion(<<) operator in cuboid class...


    return 0;
}