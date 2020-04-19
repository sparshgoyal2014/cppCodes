#include<iostream>
using namespace std;

struct Rectangle{
    int length = 10;
    int breadth = 5;

    int function(){
        return 2;
    }

};


int main(){

    //struct Rectangle r;
    struct Rectangle r = {1,2};  // redeclaration
    cout << sizeof(int) << endl;
    cout << sizeof(Rectangle) << endl;

    Rectangle R;
    R = {5,6};

    cout << R.length << "  " << R.breadth << endl;
    return 0;
}