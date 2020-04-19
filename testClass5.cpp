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
    test obj, obj2;
    cout << obj.num << "   " << obj.name << endl;
    cout << obj.yourAge << endl;


    cout << test().yourAge2 << endl;
    test().set();
    cout << test().yourAge2 << endl; 

    cout << obj.yourAge2 << "<------" << endl;
    obj.set();
    cout << obj.yourAge2 << endl;


    // if(obj2 == obj{
    //     cout << "hese objects are equal" << endl;
    // }
    return 0;
}