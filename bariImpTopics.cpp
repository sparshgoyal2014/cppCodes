#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout << " this is base class" << endl;

    }

    base(int a ){
        cout << " value is " << a << endl;
    }

    base (int a , int b) {
        cout << "values are :" << a << " " << b << endl;
    }


};

int main(){

    base *ptr = new base(2,3);
   // base b,b2(1),b3(2,3);

    cout << "BYE..." << endl;

    return 0;
}
