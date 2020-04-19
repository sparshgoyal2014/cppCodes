#include<iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;

    void setLength(){
        cout << "set length :";
        cin >> length;
        cout << endl;
    }

    void setBreadth(){
        cout << "set breadth :";
        cin >> breadth;
        cout << endl;
    }

    rectangle(){
        cout << length*breadth << endl;

    }
};

int main(){

    rectangle r,r2;

    r.setLength();
    r.setBreadth();

    
    rectangle *ptr;
    ptr= &(r2);

    return 0;
}