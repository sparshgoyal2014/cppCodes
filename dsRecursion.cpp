#include<iostream>
using namespace std;

void display(int n){
    if(n>0){
        cout << n  << " " ;
        display(n-1);
        cout << n  << " ";
    }
}

int main(){
    int x = 3;
    display(3);

    return 0;
}

