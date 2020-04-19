#include<iostream>
using namespace std;

class car{
    public:
    virtual void start(){
        cout << "car started " << endl;
    }

     virtual void stop(){
        cout << " car stopped " << endl;
    }

    virtual void startAC() = 0;   // pure virtual function.....
};


class innova : public car{
    public:

    void start(){
        cout <<" innova started " << endl;
    }

    void stop(){
        cout << "innova stopped"  << endl;
    }
};

class swift : public car{
    public:
    void start(){
        cout <<" swift started " << endl;
    }

    void stop(){
        cout << "swift stopped" << endl;

    }
};


int main(){

     car* ptr = new innova();

    ptr -> start();

    ptr = new swift();
    ptr -> start();

    return 0;
}


