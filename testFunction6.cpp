#include<iostream>
using namespace std;

int num = 3;

inline void function(){
    cout << num << endl;
}

int main(){

    int name = 2;
    function();
    
    return 0;
}