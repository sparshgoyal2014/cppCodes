#include<iostream>
using namespace std;

template<class T>
T max1(T x, T y){
    return x>y?x:y;
}

int main(){
    cout << max1(10,15) << endl;
    return 0;
}