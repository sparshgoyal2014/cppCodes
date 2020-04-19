#include<iostream>
using namespace std;

class outer{
    class inner2{};
    public:
    int a = 10;
    static int b;

    void fun(){
        i.show();
        cout << i.x << endl;

    }

    class inner{
        public:
        int x = 25;
        /*outer o;
        void display(){
            cout << o.a << endl;
        }
        */

        void show(){
            cout <<  " show" << endl;
        }
        void test(){
            //cout << a << endl; // it cannot access a because it is non static ...
            cout << b << endl; // 
        }

    };

    inner i;

}; 

int outer:: b = 0;

int main(){
    outer o1;
    o1.fun();

    // usoing inner classss outside the outer class....

    outer:: inner i;
    i.show();
    // outer::inner2 i2;  //we cannot do this bcozz inner2 is declared private and can be 
    // accessed only by that class   and not outside this class/....
    
    return 0;

}