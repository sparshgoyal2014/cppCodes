#include<iostream>
#include<fstream>

using namespace std;

class test{
    public:
    int a = 30;
    string display(){
        return "this is test class..";
    }

        friend ostream & operator<<(ostream & os , test &t);



};

ostream & operator<<(ostream & o , test &t){
    o<< t.display() << endl;;
    return o;
}

int main(){

    //test * p = new test;
    test t;

    test * ptr = &t;

    cout << *ptr << endl;

    //cout << *p << endl;
    return 0;


    
}