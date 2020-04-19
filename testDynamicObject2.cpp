#include<iostream>
using namespace std;

class test{
    
    public:

    int *ptr = new int(5);
    
};


int main(){
    test t;

    cout << sizeof(t) << endl;

    cout << *(t.ptr) << endl;

    return 0;

}