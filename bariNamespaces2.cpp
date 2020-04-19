#include<iostream>
using namespace std;


namespace test{
    void display();
}

class test2{
    public:

    test2(){
        cout << "this is test2 construnctor..." << endl;
    }

    test2(int x){
        cout << "this is parametrized constructor woth parameter :" << x << endl;
    }
    void display();
};

void test:: display(){ 
    cout << " this is display function.." << endl;
}

void test2:: display(){
    cout << "this is diosplay function in test2 class" << endl;
}

int main(){

    int x = 5;
    test:: display();
    test2().display();
    
    test2 t = test2();  // t is the instance of class teet2
    t.display();

    test2 t2;

    test2 t3(2);
    test2 t4 = test2(4);
    return 0;
}