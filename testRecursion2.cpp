#include<iostream>
using namespace std;

int fun(int x){
    if(x != 0){
        cout << x  << endl;
    }

    return x;
}

int main(){
    int sum = fun(6) + fun(3) * fun(5);
    cout << sum << endl;

    return 0;
}