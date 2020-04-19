#include<iostream>
using namespace std;

int main(){
    float f = 3.1;  // 3.1 is by default double// type coercion occurs // remember the last lecture of bari
    double d = 3.1;

    if(f==d){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }

    return 0;
}