#include<iostream>
using namespace std;

int main(){

    int x = 20;
    try{
        //int c = x/0;
        throw(10);
    }catch(...){
        cout << "Division by zero.."  << endl;
    }

    return 0;
}

