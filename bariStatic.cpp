#include<iostream>
using namespace std;

int fun(){
    static int x =5;

    ++x;
    ++x;

    return x; 
}

int main(){
    cout << fun() << endl;
    cout << fun() << endl;
  //  cout << x << endl;

    return 0;
}