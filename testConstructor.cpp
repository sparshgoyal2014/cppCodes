#include<iostream>
using namespace std;

class test{
    public:
    test(){
        cout << "this is test class constructor" << endl;
    }
};

int main(){
    test t();

    return 0;
}