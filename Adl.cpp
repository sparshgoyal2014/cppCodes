#include<iostream>
using namespace std;

void display(){
    cout << "this is display function" << endl;
}


class test1{
    public:
    void display(){
        cout << "this is test1 display function" << endl;
    }
};
class test: public test1{
    public:
    void use(){
        display();
    }
};

int main(){
    test obj;
    obj.use();
    
    return 0;
}