#include<iostream>
using namespace std;

class test{
    public: 
    void display(){
        cout << "display function of test class" << endl;
    }
};

class test2{
    public:
    void display(){
        cout << "display function of test2 class" << endl;
    }
};

int main(){
    test t;
    test2 t2;

    test t3 = (test)t2;
    


}