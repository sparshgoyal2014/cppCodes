#include<iostream>
using namespace std;

class test{
    public: 

      test(){}
    test(int t, int u){
        cout << t << "   " << u <<  endl;
    }
    int a, b;
};



int main(){
     test t = {1,2};  //constructor will be called
    new  test();
    cout << test().a << "   " << test().b << endl;

    new test(5,6);

    test obj2{8,9};

    //test obj3 = (test)0;

    return 0;
 
}