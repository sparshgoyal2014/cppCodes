#include<iostream>
using namespace std;


class test{
    private: 
    int num = 5;

    public: 
    void display(int num){
        cout << num << endl;
        cout << test:: num << endl;   // if variable or class property is static  then we not nee to create objects of the classes 
        // we can directly access them through the scope reso;ution operator
        cout << this-> num << endl;

    }
};

int main(){
    test obj;
    obj.display(6);

    return 0;
}