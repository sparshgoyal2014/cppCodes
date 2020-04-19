#include<iostream>
using namespace std;

struct Rectangle {
    int length = 3;
    int breadth = 2; 
};

void changeLength(struct Rectangle r){
    r.length = 10;
    cout << r.length << "    " << r.breadth << endl;
}

int main(){
    Rectangle r;
    changeLength(r);   // pass by value
    // pass by reference and passs by address are also there watch bari's video

    return 0;
}