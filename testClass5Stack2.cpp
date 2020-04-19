#include<iostream>
using namespace std;

class test{
    public:
    int num = 30;

    int yourAge ;

    void set(){
        yourAge = (test().num)*2; 
    }
};

int main(){
    test obj;


    cout << test().yourAge << endl; // i was expecting garbage but giving me 0
    cout << obj.yourAge << endl;    // ya! garbage it is, in this case

    ///// now/////

    test().set();
    cout << test().yourAge << endl;  // Iwas expecting 60 but giving me againg 0

    cout << obj.yourAge << endl;  // I was expecting garbage but giving me 0;



    return 0;
}