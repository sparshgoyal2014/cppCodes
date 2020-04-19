#include<iostream>
using namespace std;

struct temp{
    int i;
    int *f;
};

int main(){
    temp obj;
    temp *ptr ;
    ptr-> i = 20; // at the address to which it points
    ptr-> f = &ptr->i;  

    cout << *ptr->f << endl;
    cout << *(ptr->f) << endl;
   // cout << (*ptr)->f << endl;  // error

    return 0;
}
