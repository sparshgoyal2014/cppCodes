#include<iostream>
using namespace std;

int* fun(int *x){
    cout << x << endl;

    return x;

}

int main(){

    int a= 10;
    cout << fun(&a) << endl;
    return 0;
}