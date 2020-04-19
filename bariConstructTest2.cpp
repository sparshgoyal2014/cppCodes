#include<iostream>
using namespace std;

class test{
    public:

    int length;
    int breadth;
   //test(){};
    test(int l ,int b=0   ){
        length = l;
        breadth = b;
    }


};

int main(){
    test t;
    test t2(2,3);
    return 0;
}