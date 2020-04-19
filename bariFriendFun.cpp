#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;

    public:
    complex(int r=0,int i = 0){
        real = r;
        img = i;
    }

    void display(){
        cout << real << "+i" << img;
    }
   // friend complex operator+ (complex c1,complex c2);
};

/*complex operator+ (complex c1,complex c2){
    complex t;
    t.real = c1.real + c2.real;
}
*/

complex operator+(complex c){
    complex temp;
    temp.real = real + c.real;
    temp.img + img + c.img;

    return temp;
}

int main(){
    
}