#include<iostream>
using namespace std;

class test{
    public:

    int length = 50;
    int breadth = 10;


    test(){
        cout << length << " " << breadth << endl;
    }

    test (test& t){
        length = t.length;
        breadth = t.breadth;
    }

    void display(){
        cout << length << " " << breadth << endl;
    }
};


int main(){
    test t1;
    test t2(t1);

    t2.display();

    return 0;
}