#include<iostream>
using namespace std;

class test{
    public:
    int num = 30;
    string name = "spartsh";

    int yourAge = this-> num + 2;
    int yourAge2 ;

    void set(){
        yourAge2 = (test().num)*2; 
    }
};

int main(){
    test obj;
///////////////////////////////////////////////////////
    // cout << test().yourAge2 << endl;
    // cout << obj.yourAge2 << endl;

    /////////////////////////////////////////////////
    // test().set();
    // cout << test().yourAge2 << endl;
    // cout << obj.yourAge2 << endl;
    // cout << obj.yourAge2 << endl; 

    // cout << obj.yourAge2 << "<------" << endl;
    // obj.set();
    // cout << obj.yourAge2 << endl;



    //////////////////////////program 2 //////////////////////////////
     cout << test().yourAge2 << endl; // i was expecting garbage but giving me 0
    cout << obj.yourAge2 << endl;    // ya! garbage it is, in this case

    ///// now/////

    test().set();
    cout << test().yourAge2 << endl;  // Iwas expecting 60 but giving me againg 0

    cout << obj.yourAge2 << endl;  // I was expecting garbage but giving me 0;


    cout << obj.yourAge2 << endl;

    return 0;
}