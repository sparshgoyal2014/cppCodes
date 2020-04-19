#include<iostream>
using namespace std;

class test{
    public: 
    test(int a){
        cout << a << endl;
    }
};

int main(){
    test t(3);
    return 0;
}