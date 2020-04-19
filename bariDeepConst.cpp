#include<iostream>
using namespace std;

class rectangles
{
    private:

     int length;
     int breadth;

    public:

    void setLength(int l){
        length = l;
    }

    void setBreadth(int b){
        breadth = b;
    }

    int getLength(){
        return length;
        }
    int getBreadth(){
        return breadth;
        }

       // rectangles(){};

    rectangles(int l , int b){
        length = l;
        breadth = b;
        int *p = new int[10];
        int *q = &length
    }

    rectangles(rectangles &r){
        length = r.length;
        breadth = r.breadth;
        int p = r.p;
        int *Ptr = r.q; 
    }
    
    void showAddress(int *p){
        cout << p << endl;
    }

    
};


int main(){
    rectangles r1(50,25);
    rectangles r2(r1);

    rectangles r3;


    cout << r2.getLength() << ' ' << r2.getBreadth() << endl;
    //r1.setLength(10);
    //r1.setBreadth(5);

    //cout << r1.getLength() << " " << r1.getBreadth() << endl;

    return 0; 
}