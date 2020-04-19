#include<iostream>
using namespace std;

class parent{
    public:
    void display(){
        cout << "  display of parent " << endl; 
    }

};

class child : public parent{
    public:
    void display();

};

void child:: display(){
    cout << " display Of child " << endl;

}

int main(){
    parent p;
    p.display();

    child c;
    c.display();   // redifining the SAME function with extra feutures is known as fun. overriding...

    return 0;


}