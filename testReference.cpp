#include<iostream>
using namespace std;

void fun(int &x){
    cout << "this is test Reference..." << endl;
    cout << ++x << endl;
}

int main(){
    int y = 10;
    fun(y);
    //cout << x << endl;
    cout << y << endl;

    return 0;
}
