#include<iostream>
using namespace std;

class test{
    public:
    test(){
        cout << "constructor created.." << endl;

    }

    ~test(){
        cout << "destructor created" << endl;

    }


};
void fun(){
    test t;
}

int main(){

    fun();

    {
        test t;
    }

    test * ptr;

    ptr = new test();


    delete ptr;

    return 0;

}


