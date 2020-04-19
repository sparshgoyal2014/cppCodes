#include<iostream>
using namespace std;

class test{
    private:
    int num = 1;

    public:

    test() = default;
    // test(){
    //     cout << num << endl;
    //     cout << "this is default constructor" << endl;
    // }

    test(int a){
        cout << "this is param/. constructor with arg. :" << a << endl;
    }

};


test obj;

int main(){
    test t = {};
   // test t2();

    test t3{};
    //test t4 = {32};

    return 0;
}