#include<iostream>
using namespace std;

class test{
    private:
    int a = 5;

    public: 

    void display(){
        cout << "this is display Function of test Class" << endl;
    }
};

int display(){
    cout << "this is global display function" << endl;
    return 0;
}

int main(){

    cout << sizeof(display()) << endl;

    // test obj();
    // obj.display;
     test().display();


     cout << sizeof(test()) << endl;
    return 0;
}
