#include<iostream>
using namespace std;

class test{
    public: 
    int x = 2;
    int y = 5;
    void display(int x, int z){   // having separate copy, from which all the objects share 
        this->x = x;
        y = z;
    }
};

int main(){
    test t1, t2;
    t1.display(9, 8);
    cout << t1.x << t1.y << endl;
    cout << t2.x << t2.y << endl;

    return 0;
}