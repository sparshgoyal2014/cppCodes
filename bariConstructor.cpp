#include<iostream>
using namespace std;

class rectangles{
    private:
    int length;
    int breadth;

    public:

    rectangles(){
        length =5;
        breadth = 2;
        cout << "this is default constructor.." << endl;
    }

    rectangles(int l,int b){
        setLength(l);
        setBreadth(b);
        getLength();
        getBreadth();
    }
    void setLength(int l){
        if(l>=0){
            length = l;
        }

        else 
        l=0;
    }

    void setBreadth(int b){
        if(b>=0){
            breadth = b;
        }

        else 
        breadth = 0;
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }


   int area(){
       return length*breadth;
   }

   int perimeter(){
       return 2*(length+breadth);
   }
   
};


int main(){
   //rectangles r;
   rectangles r1();
   rectangles r2(10,5);

   cout <<r1.area() << endl;

   return 0;

}
